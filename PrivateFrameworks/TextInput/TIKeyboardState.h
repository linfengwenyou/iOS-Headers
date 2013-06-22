/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, TIDocumentState, TIKeyboardCandidate, TIKeyboardLayout, TIKeyboardLayoutState;

@interface TIKeyboardState : NSObject <NSSecureCoding>
{
    union {
        int integerValue;
        struct {
            unsigned int userSelectedCurrentCandidate:1;
            unsigned int shouldSkipCandidateSelection:1;
            unsigned int suppressingCandidateSelection:1;
            unsigned int needsCandidateMetadata:1;
            unsigned int keyboardEventsLagging:1;
            unsigned int hardwareKeyboardMode:1;
            unsigned int splitKeyboardMode:1;
            unsigned int wordLearningEnabled:1;
            unsigned int autocorrectionEnabled:1;
            unsigned int typologyLoggingEnabled:1;
            unsigned int autocapitalizationType:2;
            unsigned int keyboardType:4;
        } fields;
    } _mask;
    NSString *_inputMode;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    TIKeyboardCandidate *_currentCandidate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property(copy, nonatomic) NSString *inputForMarkedText; // @synthesize inputForMarkedText=_inputForMarkedText;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(copy, nonatomic) TIKeyboardLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) unsigned int keyboardType;
@property(nonatomic) unsigned int autocapitalizationType;
@property(nonatomic) BOOL typologyLoggingEnabled;
@property(nonatomic) BOOL autocorrectionEnabled;
@property(nonatomic) BOOL wordLearningEnabled;
@property(nonatomic) BOOL splitKeyboardMode;
@property(nonatomic) BOOL hardwareKeyboardMode;
@property(nonatomic) BOOL keyboardEventsLagging;
@property(nonatomic) BOOL needsCandidateMetadata;
@property(nonatomic) BOOL suppressingCandidateSelection;
@property(nonatomic) BOOL shouldSkipCandidateSelection;
@property(nonatomic) BOOL userSelectedCurrentCandidate;

@end
