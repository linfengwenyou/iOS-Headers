//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSDate.h>

__attribute__((visibility("hidden")))
@interface __NSDate : NSDate
{
    double _time;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (void)dealloc;
- (double)timeIntervalSinceReferenceDate;

@end
