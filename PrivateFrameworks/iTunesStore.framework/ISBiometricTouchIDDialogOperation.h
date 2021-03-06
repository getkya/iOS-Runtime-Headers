/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricTouchIDDialogOperation : ISOperation {
    ISBiometricAuthenticationContext * _context;
    ISDialog * _dialog;
}

@property (retain) ISBiometricAuthenticationContext *biometricAuthenticationContext;
@property (retain) ISDialog *dialog;

- (void).cxx_destruct;
- (BOOL)_runAuthkitOperationWithError:(id)arg1 returningError:(id*)arg2;
- (BOOL)_runSignatureOperationReturningError:(id*)arg1;
- (id)biometricAuthenticationContext;
- (id)dialog;
- (id)initWithDialog:(id)arg1;
- (void)run;
- (void)setBiometricAuthenticationContext:(id)arg1;
- (void)setDialog:(id)arg1;

@end
