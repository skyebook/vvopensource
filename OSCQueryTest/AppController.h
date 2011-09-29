//
//  AppController.h
//  VVOpenSource
//
//  Created by bagheera on 9/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <VVBasics/VVBasics.h>
#import <VVOSC/VVOSC.h>




@interface AppController : NSObject <OSCNodeQueryDelegateProtocol,OSCDelegateProtocol,OSCAddressSpaceDelegateProtocol> {
	IBOutlet NSPopUpButton		*createTypePopUpButton;
	IBOutlet NSScrollView		*myScrollView;
	
	IBOutlet NSScrollView		*targetScrollView;
	
	IBOutlet NSTextView			*rxDataView;
	IBOutlet NSTextView			*txDataView;
	
	IBOutlet OSCManager			*oscManager;
	
	IBOutlet NSTextField		*oscAddressField;
	
	MutLockArray				*rxMsgs;
	MutLockArray				*txMsgs;
}

- (IBAction) createButtonUsed:(id)sender;

- (IBAction) populateButtonUsed:(id)sender;

- (IBAction) listNodesClicked:(id)sender;
- (IBAction) documentationClicked:(id)sender;
- (IBAction) acceptedTypesClicked:(id)sender;
- (IBAction) currentValClicked:(id)sender;

- (void) _lockedUpdateDataAndViews;

@end
