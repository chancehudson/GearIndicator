ARCHS = armv7
include theos/makefiles/common.mk

TWEAK_NAME = GearIndicator
GearIndicator_FILES = Tweak.xm
GearIndicator_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Fisica\ Fitness"
