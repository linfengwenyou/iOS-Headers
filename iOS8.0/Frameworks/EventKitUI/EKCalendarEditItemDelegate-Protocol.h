//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendarEditItem, UINavigationController, UITableView;

@protocol EKCalendarEditItemDelegate <NSObject>
- (UITableView *)tableView;
- (UINavigationController *)owningNavigationController;
- (int)sectionForCalendarEditItem:(EKCalendarEditItem *)arg1;
- (void)calendarItemStartedEditing:(EKCalendarEditItem *)arg1;
@end
