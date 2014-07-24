//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class OriginalTable;

@interface StaticDataTableViewController : UITableViewController
{
    BOOL _hideSectionsWithHiddenRows;
    int _insertTableViewRowAnimation;
    int _deleteTableViewRowAnimation;
    int _reloadTableViewRowAnimation;
    OriginalTable *_originalTable;
}

@property(retain, nonatomic) OriginalTable *originalTable; // @synthesize originalTable=_originalTable;
@property(nonatomic) int reloadTableViewRowAnimation; // @synthesize reloadTableViewRowAnimation=_reloadTableViewRowAnimation;
@property(nonatomic) int deleteTableViewRowAnimation; // @synthesize deleteTableViewRowAnimation=_deleteTableViewRowAnimation;
@property(nonatomic) int insertTableViewRowAnimation; // @synthesize insertTableViewRowAnimation=_insertTableViewRowAnimation;
@property(nonatomic) BOOL hideSectionsWithHiddenRows; // @synthesize hideSectionsWithHiddenRows=_hideSectionsWithHiddenRows;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)reloadDataAnimated:(BOOL)arg1;
- (BOOL)cellIsHidden:(id)arg1;
- (void)cells:(id)arg1 setHidden:(BOOL)arg2;
- (void)cell:(id)arg1 setHidden:(BOOL)arg2;
- (void)updateCells:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end
