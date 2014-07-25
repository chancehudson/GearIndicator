//
//GearIndicator
//

#import "Fitness/FullWorkoutPageVC.h"
#import "Fitness/SimpleWorkoutPageVC.h"

#define C 82.5197 //tire circumference in inches (2.096 meters)
#define BIG_TAG 14282838
#define SMALL_TAG 3423894723

@interface SimpleWorkoutPageVC (GearIndicator)
-(void)calculateAndUpdateGear;
@end

double bigRing = 52;
double smallRing = 42;
int cogCount = 9;
//double cogs[9] = {12,13,14,15,17,19,21,23,25};
double cogs[9] = {25,23,21,19,17,15,14,13,12};

int getGear(double approx);
	
%hook SimpleWorkoutPageVC
//the main workout page that I use
//the only page that i want to put the gear on

- (void)updateWorkoutPageGUI{
	%orig;
	[self calculateAndUpdateGear];
}

%new(v@:)
-(void)calculateAndUpdateGear{
	UILabel *bigGear = (UILabel*)[self.view viewWithTag:BIG_TAG];
	UILabel *smallGear = (UILabel*)[self.view viewWithTag:SMALL_TAG];
	double cadence = [self.cadenceDynamicLabel.text floatValue];
	double speed = [self.speedDynamicLabel.text floatValue];
	if(cadence == 0 || speed == 0)
		return;
	double temp = (cadence*C)/(speed*1056.0f);
	// temp = (cog count/chainring count)
	double big = bigRing*temp;
	double small = smallRing*temp;
	bigGear.text = [NSString stringWithFormat:@"%i", getGear(big)]; 
	smallGear.text = [NSString stringWithFormat:@"%i", getGear(small)]; 
}

-(void)viewDidLoad{
	CGPoint origin = [self.speedDynamicLabel.superview convertPoint:self.speedDynamicLabel.frame.origin toView:self.view];
	float x = origin.x+self.speedDynamicLabel.frame.size.width-35;
	UILabel *bigGearLabel = [[UILabel alloc] initWithFrame:CGRectMake(x,origin.y,50,50)];
	bigGearLabel.text = @"-";
	bigGearLabel.textColor = [UIColor blackColor];
	bigGearLabel.textAlignment = NSTextAlignmentCenter;
	bigGearLabel.tag = BIG_TAG;
	bigGearLabel.font = [UIFont systemFontOfSize:25];
	[self.view addSubview:bigGearLabel];
	[bigGearLabel release];

	UILabel *smallGearLabel = [[UILabel alloc] initWithFrame:CGRectMake(x,origin.y+self.speedDynamicLabel.frame.size.height-50,50,50)];
	smallGearLabel.text = @"-";
	smallGearLabel.textColor = [UIColor blackColor];
	smallGearLabel.textAlignment = NSTextAlignmentCenter;
	smallGearLabel.tag = SMALL_TAG;
	smallGearLabel.font = [UIFont systemFontOfSize:25];
	[self.view addSubview:smallGearLabel];
	[smallGearLabel release];
	%orig;
}

-(void)dealloc{
	[[self.view viewWithTag:BIG_TAG] removeFromSuperview];
	[[self.view viewWithTag:SMALL_TAG] removeFromSuperview];
	%orig;
}

%end

int getGear(double approx){
	double range = 2;
	if(approx >= cogs[0]+range || approx <= cogs[cogCount-1]-range)
		return 0;
	int nearest = 0;
	double dist = INT_MAX;
	for(int x = 0; x < cogCount; x++){
		double d = abs(cogs[x]-approx);
		if(d < dist){
			dist = d;
			nearest = x+1;
		}
	}
	return nearest;
}

%ctor{
	%init;
}
