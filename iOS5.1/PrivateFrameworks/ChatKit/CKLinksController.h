/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UINavigationController, UITableView;

@interface CKLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id _delegate;
    UINavigationController *_navigationController;
    NSArray *_linkProps;
    UITableView *_table;
}

- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLinkProperties:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidUnload;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
