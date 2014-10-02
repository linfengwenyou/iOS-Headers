//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFLegibilitySettingsProviderDelegate.h"
#import "SBUIBiometricEventObserver.h"
#import "SBUIPasscodeLockView.h"

@class NSString, SBUIPasscodeEntryField, UIColor, _UILegibilitySettings;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView>
{
    id <SBUIPasscodeLockViewDelegate_Internal> _delegate;
    int _style;
    NSString *_passcode;
    BOOL _playsKeypadSounds;
    BOOL _showsEmergencyCallButton;
    BOOL _showsStatusField;
    BOOL _becameVisible;
    float _backgroundAlpha;
    UIColor *_customBackgroundColor;
    SBUIPasscodeEntryField *_entryField;
    id <SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
    float _luminanceBoost;
    float _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
    BOOL _mesaLockedOut;
    unsigned int _biometricMatchMode;
    BOOL _shouldResetForFailedPasscodeAttempt;
}

@property(nonatomic) BOOL shouldResetForFailedPasscodeAttempt; // @synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt;
@property(nonatomic) unsigned int biometricMatchMode; // @synthesize biometricMatchMode=_biometricMatchMode;
@property(nonatomic, getter=_luminosityBoost, setter=_setLuminosityBoost:) float luminosityBoost; // @synthesize luminosityBoost=_luminanceBoost;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; // @synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider;
@property(retain, nonatomic, getter=_entryField, setter=_setEntryField:) SBUIPasscodeEntryField *_entryField; // @synthesize _entryField;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) float backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) BOOL showsStatusField; // @synthesize showsStatusField=_showsStatusField;
@property(nonatomic) BOOL showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
@property(readonly, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) id <SBUIPasscodeLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (void)_updateStatusTextForBioEvent:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (void)_handleBiometricEvent:(unsigned int)arg1;
- (void)_resetForFailedMesaAttemptWithEvent:(unsigned int)arg1;
- (void)_resetStatusText;
- (void)_evaluateLuminance;
- (float)_luminanceBoostFromDisplayBrightness;
- (float)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (void)_clearBrightnessChangeTimer;
- (void)_noteScreenBrightnessDidChange;
- (BOOL)_wantsBiometricAuthentication;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (void)_luminanceBoostDidChange;
- (void)_setLegibilitySettings:(id)arg1;
- (BOOL)_isBoundsPortraitOriented;
- (int)_orientation;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
@property(nonatomic) BOOL playsKeypadSounds; // @dynamic playsKeypadSounds;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
