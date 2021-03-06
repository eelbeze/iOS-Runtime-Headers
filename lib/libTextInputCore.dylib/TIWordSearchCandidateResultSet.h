/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying> {
    NSString * _autoconvertedCandidateString;
    NSArray * _autoconvertedCandidates;
    NSString * _autoconvertedInputString;
    BOOL  _empty;
    NSArray * _initiallyHiddenCandidates;
    NSMutableDictionary * _mutableCandidateRefsDictionary;
    NSMutableArray * _mutableCandidates;
    NSMutableArray * _mutableProactiveTriggers;
    NSArray * _proactiveCandidates;
    unsigned int  _selectedHiddenCandidateIndex;
}

@property (nonatomic, retain) NSString *autoconvertedCandidateString;
@property (nonatomic, copy) NSArray *autoconvertedCandidates;
@property (nonatomic, retain) NSString *autoconvertedInputString;
@property (nonatomic, readonly, retain) NSDictionary *candidateRefsDictionary;
@property (nonatomic, readonly, retain) NSArray *candidates;
@property (getter=isEmpty, nonatomic) BOOL empty;
@property (nonatomic, copy) NSArray *initiallyHiddenCandidates;
@property (nonatomic, retain) NSMutableDictionary *mutableCandidateRefsDictionary;
@property (nonatomic, retain) NSMutableArray *mutableCandidates;
@property (nonatomic, readonly, retain) NSMutableArray *mutableProactiveTriggers;
@property (nonatomic, retain) NSArray *proactiveCandidates;
@property (nonatomic, readonly, retain) NSArray *proactiveTriggers;
@property (nonatomic) unsigned int selectedHiddenCandidateIndex;

+ (id)emptySet;

- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2;
- (void)addMecabraFacemarkCandidate:(void*)arg1 forInput:(id)arg2;
- (void)addMecabraProactiveCandidate:(void*)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned int)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned int)arg4 cursorMovement:(int)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned int)arg4 cursorMovement:(int)arg5 annotation:(id)arg6;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (id)autoconvertedCandidateString;
- (id)autoconvertedCandidates;
- (id)autoconvertedInputString;
- (id)candidateRefsDictionary;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned int)arg4;
- (id)initiallyHiddenCandidates;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 atIndex:(unsigned int)arg3;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)isEmpty;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)mutableCandidateRefsDictionary;
- (id)mutableCandidates;
- (id)mutableProactiveTriggers;
- (id)proactiveCandidates;
- (id)proactiveTriggers;
- (unsigned int)selectedHiddenCandidateIndex;
- (void)setAutoconvertedCandidateString:(id)arg1;
- (void)setAutoconvertedCandidates:(id)arg1;
- (void)setAutoconvertedInputString:(id)arg1;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)setEmpty:(BOOL)arg1;
- (void)setInitiallyHiddenCandidates:(id)arg1;
- (void)setMutableCandidateRefsDictionary:(id)arg1;
- (void)setMutableCandidates:(id)arg1;
- (void)setProactiveCandidates:(id)arg1;
- (void)setSelectedHiddenCandidateIndex:(unsigned int)arg1;

@end
