#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AppUserToken, AppBoardAction, AppChessFigureOnBoard, AppFigurePosition, AppSingleTaskReducer, AppChessTask, AppKotlinEnum, AppSingleTaskNewsId, AppPgnMove, AppChessFigureColor, AppChessFigureType, AppChessFigure, AppBaseApi, AppKotlinException, AppChessTaskShortData, AppAuthorizationUserData, AppNewUserData, AppTaskFullData, AppTaskShortData, AppPgnMovePair, AppChessTaskFullData, AppTasksListReducer, AppTasksListMessageId, AppTasksListDestinationId, AppLoggedUserRepository, AppTasksListApi, AppSingleTaskApi, AppTasksListNews, AppTasksListState, AppTasksListNewsId, AppLoginMessageId, AppOnBoardingDestinationId, AppLoginState, AppRegistrationState, AppOnBoardingNewsId, AppLoginReducer, AppRegisterReducer, AppUserApi, AppKotlinThrowable, AppKotlinx_coroutines_coreCancellationException, AppKotlinArray, AppKotlinRuntimeException, AppKotlinIllegalStateException, AppKotlinx_serialization_runtimeSerialKind, AppKotlinNothing, AppKotlinx_serialization_runtimeUpdateMode, AppKotlinx_coroutines_coreAtomicDesc, AppKotlinx_coroutines_corePrepareOp, AppKotlinx_coroutines_coreAtomicOp, AppKotlinx_coroutines_coreOpDescriptor, AppKotlinx_coroutines_coreLinkedListNode, AppKotlinx_coroutines_coreAbstractAtomicDesc;

@protocol AppSingleTaskView, AppKotlinComparable, AppKotlinx_coroutines_coreCompletableJob, AppKotlinx_serialization_runtimeKSerializer, AppTasksListView, AppLoginView, AppRegisterView, AppKotlinx_coroutines_coreChildHandle, AppKotlinx_coroutines_coreChildJob, AppKotlinx_coroutines_coreDisposableHandle, AppKotlinx_coroutines_coreJob, AppKotlinSequence, AppKotlinx_coroutines_coreSelectClause0, AppKotlinCoroutineContextKey, AppKotlinCoroutineContextElement, AppKotlinCoroutineContext, AppKotlinx_serialization_runtimeEncoder, AppKotlinx_serialization_runtimeSerialDescriptor, AppKotlinx_serialization_runtimeSerializationStrategy, AppKotlinx_serialization_runtimeDecoder, AppKotlinx_serialization_runtimeDeserializationStrategy, AppKotlinx_coroutines_coreParentJob, AppKotlinIterator, AppKotlinx_coroutines_coreSelectInstance, AppKotlinSuspendFunction0, AppKotlinx_serialization_runtimeCompositeEncoder, AppKotlinx_serialization_runtimeSerialModule, AppKotlinAnnotation, AppKotlinx_serialization_runtimeCompositeDecoder, AppKotlinContinuation, AppKotlinFunction, AppKotlinx_serialization_runtimeSerialModuleCollector, AppKotlinKClass, AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface AppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AppBase (AppBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AppByte : AppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AppUByte : AppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AppShort : AppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AppUShort : AppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AppInt : AppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AppUInt : AppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AppLong : AppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AppULong : AppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AppFloat : AppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AppDouble : AppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AppBoolean : AppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggedUserRepository")))
@interface AppLoggedUserRepository : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AppUserToken * _Nullable)getLoggedUserTokens __attribute__((swift_name("getLoggedUserTokens()")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)setLoggedUserTokensTokens:(AppUserToken *)tokens __attribute__((swift_name("setLoggedUserTokens(tokens:)")));
@end;

__attribute__((swift_name("SingleTaskView")))
@protocol AppSingleTaskView
@required
- (void)applyActionAction:(AppBoardAction *)action __attribute__((swift_name("applyAction(action:)")));
- (void)closeView __attribute__((swift_name("closeView()")));
- (void)hideOpenSolutionButton __attribute__((swift_name("hideOpenSolutionButton()")));
- (void)showSolutionText __attribute__((swift_name("showSolutionText()")));
- (void)showWinDialog __attribute__((swift_name("showWinDialog()")));
- (void)showWrongFigureMessage __attribute__((swift_name("showWrongFigureMessage()")));
- (void)showWrongMoveDialog __attribute__((swift_name("showWrongMoveDialog()")));
- (void)updateChessBoardPositionPosition:(NSArray<AppChessFigureOnBoard *> *)position __attribute__((swift_name("updateChessBoardPosition(position:)")));
- (void)updateChessBoardSelectionSelectedCells:(NSArray<AppFigurePosition *> *)selectedCells __attribute__((swift_name("updateChessBoardSelection(selectedCells:)")));
@property void (^ _Nullable exitButtonCallback)(void) __attribute__((swift_name("exitButtonCallback")));
@property void (^ _Nullable restartButtonCallback)(void) __attribute__((swift_name("restartButtonCallback")));
@property void (^ _Nullable selectCellCallback)(AppFigurePosition *) __attribute__((swift_name("selectCellCallback")));
@property void (^ _Nullable selectFigureCallback)(NSString *) __attribute__((swift_name("selectFigureCallback")));
@property void (^ _Nullable undoButtonCallback)(void) __attribute__((swift_name("undoButtonCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleTaskPresenter")))
@interface AppSingleTaskPresenter : AppBase
- (instancetype)initWithReducer:(AppSingleTaskReducer *)reducer __attribute__((swift_name("init(reducer:)"))) __attribute__((objc_designated_initializer));
- (void)attachViewPresenterView:(id<AppSingleTaskView>)presenterView __attribute__((swift_name("attachView(presenterView:)")));
- (void)detachView __attribute__((swift_name("detachView()")));
- (void)doInitTaskTask:(AppChessTask *)task __attribute__((swift_name("doInitTask(task:)")));
- (void)openSolution __attribute__((swift_name("openSolution()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AppKotlinEnum : AppBase <AppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(AppKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleTaskNewsId")))
@interface AppSingleTaskNewsId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppSingleTaskNewsId *wrongMove __attribute__((swift_name("wrongMove")));
@property (class, readonly) AppSingleTaskNewsId *gameWon __attribute__((swift_name("gameWon")));
@property (class, readonly) AppSingleTaskNewsId *cantFindFigureById __attribute__((swift_name("cantFindFigureById")));
@property (class, readonly) AppSingleTaskNewsId *openSolution __attribute__((swift_name("openSolution")));
@property (class, readonly) AppSingleTaskNewsId *gameFinished __attribute__((swift_name("gameFinished")));
- (int32_t)compareToOther:(AppSingleTaskNewsId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardAction")))
@interface AppBoardAction : AppBase
- (instancetype)initWithFigure:(AppChessFigureOnBoard *)figure startPosition:(AppFigurePosition *)startPosition endPosition:(AppFigurePosition *)endPosition removedFigure:(AppChessFigureOnBoard * _Nullable)removedFigure promotedFigure:(AppChessFigureOnBoard * _Nullable)promotedFigure addedFigure:(AppChessFigureOnBoard * _Nullable)addedFigure __attribute__((swift_name("init(figure:startPosition:endPosition:removedFigure:promotedFigure:addedFigure:)"))) __attribute__((objc_designated_initializer));
- (AppChessFigureOnBoard *)component1 __attribute__((swift_name("component1()")));
- (AppFigurePosition *)component2 __attribute__((swift_name("component2()")));
- (AppFigurePosition *)component3 __attribute__((swift_name("component3()")));
- (AppChessFigureOnBoard * _Nullable)component4 __attribute__((swift_name("component4()")));
- (AppChessFigureOnBoard * _Nullable)component5 __attribute__((swift_name("component5()")));
- (AppChessFigureOnBoard * _Nullable)component6 __attribute__((swift_name("component6()")));
- (AppBoardAction *)doCopyFigure:(AppChessFigureOnBoard *)figure startPosition:(AppFigurePosition *)startPosition endPosition:(AppFigurePosition *)endPosition removedFigure:(AppChessFigureOnBoard * _Nullable)removedFigure promotedFigure:(AppChessFigureOnBoard * _Nullable)promotedFigure addedFigure:(AppChessFigureOnBoard * _Nullable)addedFigure __attribute__((swift_name("doCopy(figure:startPosition:endPosition:removedFigure:promotedFigure:addedFigure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (AppBoardAction *)reverse __attribute__((swift_name("reverse()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppChessFigureOnBoard * _Nullable addedFigure __attribute__((swift_name("addedFigure")));
@property (readonly) AppFigurePosition *endPosition __attribute__((swift_name("endPosition")));
@property (readonly) AppChessFigureOnBoard *figure __attribute__((swift_name("figure")));
@property (readonly) AppChessFigureOnBoard * _Nullable promotedFigure __attribute__((swift_name("promotedFigure")));
@property (readonly) AppChessFigureOnBoard * _Nullable removedFigure __attribute__((swift_name("removedFigure")));
@property (readonly) AppFigurePosition *startPosition __attribute__((swift_name("startPosition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessBoardState")))
@interface AppChessBoardState : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addFigureToBoardFigure:(AppChessFigureOnBoard *)figure __attribute__((swift_name("addFigureToBoard(figure:)")));
- (void)applyActionAction:(AppBoardAction *)action __attribute__((swift_name("applyAction(action:)")));
- (void)clearState __attribute__((swift_name("clearState()")));
- (NSArray<AppFigurePosition *> *)getAvailableCellsForFigureFigureId:(NSString *)figureId __attribute__((swift_name("getAvailableCellsForFigure(figureId:)")));
- (AppChessFigureOnBoard * _Nullable)getFigureByIdId:(NSString *)id __attribute__((swift_name("getFigureById(id:)")));
- (AppChessFigureOnBoard * _Nullable)getFigureByPgnMoveMove:(AppPgnMove *)move __attribute__((swift_name("getFigureByPgnMove(move:)")));
- (AppChessFigureOnBoard * _Nullable)getFigureByPositionPosition:(AppFigurePosition *)position __attribute__((swift_name("getFigureByPosition(position:)")));
- (NSArray<AppChessFigureOnBoard *> *)getFigures __attribute__((swift_name("getFigures()")));
- (AppBoardAction * _Nullable)undoLastAction __attribute__((swift_name("undoLastAction()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessFigureOnBoard")))
@interface AppChessFigureOnBoard : AppBase
- (instancetype)initWithId:(NSString *)id color:(AppChessFigureColor *)color position:(AppFigurePosition *)position figureType:(AppChessFigureType *)figureType __attribute__((swift_name("init(id:color:position:figureType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AppChessFigureColor *)component2 __attribute__((swift_name("component2()")));
- (AppFigurePosition *)component3 __attribute__((swift_name("component3()")));
- (AppChessFigureType *)component4 __attribute__((swift_name("component4()")));
- (AppChessFigureOnBoard *)doCopyId:(NSString *)id color:(AppChessFigureColor *)color position:(AppFigurePosition *)position figureType:(AppChessFigureType *)figureType __attribute__((swift_name("doCopy(id:color:position:figureType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppChessFigureColor *color __attribute__((swift_name("color")));
@property (readonly) AppChessFigureType *figureType __attribute__((swift_name("figureType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) AppFigurePosition *position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessFigureOnBoard.Companion")))
@interface AppChessFigureOnBoardCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AppChessFigureOnBoard *)convertFrom:(AppChessFigure *)from __attribute__((swift_name("convert(from:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleTaskReducer")))
@interface AppSingleTaskReducer : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)exitTask __attribute__((swift_name("exitTask()")));
- (void)doInitChessTaskTask:(AppChessTask *)task __attribute__((swift_name("doInitChessTask(task:)")));
- (void)openSolution __attribute__((swift_name("openSolution()")));
- (void)restartTask __attribute__((swift_name("restartTask()")));
- (void)selectCellAtPosition:(AppFigurePosition *)position __attribute__((swift_name("selectCellAt(position:)")));
- (void)selectFigureByIdFigureId:(NSString *)figureId __attribute__((swift_name("selectFigureById(figureId:)")));
- (void)undoLastMove __attribute__((swift_name("undoLastMove()")));
@property void (^ _Nullable actionCallback)(AppBoardAction *) __attribute__((swift_name("actionCallback")));
@property void (^ _Nullable boardPositionCallback)(NSArray<AppChessFigureOnBoard *> *) __attribute__((swift_name("boardPositionCallback")));
@property void (^ _Nullable newsCallback)(AppSingleTaskNewsId *) __attribute__((swift_name("newsCallback")));
@property void (^ _Nullable selectedCellsUpdateCallback)(NSArray<AppFigurePosition *> *) __attribute__((swift_name("selectedCellsUpdateCallback")));
@end;

__attribute__((swift_name("BaseApi")))
@interface AppBaseApi : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *requestEncodedPath __attribute__((swift_name("requestEncodedPath")));
@property (readonly) id<AppKotlinx_coroutines_coreCompletableJob> supervisorJob __attribute__((swift_name("supervisorJob")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseApi.Companion")))
@interface AppBaseApiCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleTaskApi")))
@interface AppSingleTaskApi : AppBaseApi
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getTaskByIdToken:(NSString *)token id:(int32_t)id taskCallback:(void (^)(AppChessTask *))taskCallback exceptionCallback:(void (^)(AppKotlinException *))exceptionCallback __attribute__((swift_name("getTaskById(token:id:taskCallback:exceptionCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListApi")))
@interface AppTasksListApi : AppBaseApi
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getAllTasksToken:(NSString *)token tasksCallback:(void (^)(NSArray<AppChessTaskShortData *> *))tasksCallback exceptionCallback:(void (^)(AppKotlinException *))exceptionCallback __attribute__((swift_name("getAllTasks(token:tasksCallback:exceptionCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserApi")))
@interface AppUserApi : AppBaseApi
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)loginUserLoginData:(AppAuthorizationUserData *)loginData loginCallback:(void (^)(AppUserToken *))loginCallback exceptionCallback:(void (^)(AppKotlinException *))exceptionCallback __attribute__((swift_name("loginUser(loginData:loginCallback:exceptionCallback:)")));
- (void)registerUserRegisterData:(AppAuthorizationUserData *)registerData registerCallback:(void (^)(AppUserToken *))registerCallback exceptionCallback:(void (^)(AppKotlinException *))exceptionCallback __attribute__((swift_name("registerUser(registerData:registerCallback:exceptionCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewUserData")))
@interface AppNewUserData : AppBase
- (instancetype)initWithId:(int32_t)id email:(NSString *)email joined_at:(int32_t)joined_at __attribute__((swift_name("init(id:email:joined_at:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (AppNewUserData *)doCopyId:(int32_t)id email:(NSString *)email joined_at:(int32_t)joined_at __attribute__((swift_name("doCopy(id:email:joined_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t joined_at __attribute__((swift_name("joined_at")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewUserData.Companion")))
@interface AppNewUserDataCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskFullData")))
@interface AppTaskFullData : AppBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name pgn:(NSString *)pgn fen:(NSString *)fen difficulty:(NSString *)difficulty __attribute__((swift_name("init(id:name:pgn:fen:difficulty:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (AppTaskFullData *)doCopyId:(int32_t)id name:(NSString *)name pgn:(NSString *)pgn fen:(NSString *)fen difficulty:(NSString *)difficulty __attribute__((swift_name("doCopy(id:name:pgn:fen:difficulty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) NSString *fen __attribute__((swift_name("fen")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *pgn __attribute__((swift_name("pgn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskFullData.Companion")))
@interface AppTaskFullDataCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskShortData")))
@interface AppTaskShortData : AppBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AppTaskShortData *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskShortData.Companion")))
@interface AppTaskShortDataCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessTask")))
@interface AppChessTask : AppBase
- (instancetype)initWithId:(int32_t)id startingPositions:(NSArray<AppChessFigure *> *)startingPositions activeColor:(AppChessFigureColor *)activeColor pgnMoves:(NSArray<AppPgnMovePair *> *)pgnMoves __attribute__((swift_name("init(id:startingPositions:activeColor:pgnMoves:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<AppChessFigure *> *)component2 __attribute__((swift_name("component2()")));
- (AppChessFigureColor *)component3 __attribute__((swift_name("component3()")));
- (NSArray<AppPgnMovePair *> *)component4 __attribute__((swift_name("component4()")));
- (AppChessTask *)doCopyId:(int32_t)id startingPositions:(NSArray<AppChessFigure *> *)startingPositions activeColor:(AppChessFigureColor *)activeColor pgnMoves:(NSArray<AppPgnMovePair *> *)pgnMoves __attribute__((swift_name("doCopy(id:startingPositions:activeColor:pgnMoves:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppChessFigureColor *activeColor __attribute__((swift_name("activeColor")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AppPgnMovePair *> *pgnMoves __attribute__((swift_name("pgnMoves")));
@property (readonly) NSArray<AppChessFigure *> *startingPositions __attribute__((swift_name("startingPositions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessTaskFullData")))
@interface AppChessTaskFullData : AppBase
- (instancetype)initWithId:(int32_t)id fen:(NSString *)fen pgn:(NSString *)pgn __attribute__((swift_name("init(id:fen:pgn:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (AppChessTaskFullData *)doCopyId:(int32_t)id fen:(NSString *)fen pgn:(NSString *)pgn __attribute__((swift_name("doCopy(id:fen:pgn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fen __attribute__((swift_name("fen")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *pgn __attribute__((swift_name("pgn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessTaskShortData")))
@interface AppChessTaskShortData : AppBase
- (instancetype)initWithId:(int32_t)id description:(NSString *)description __attribute__((swift_name("init(id:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AppChessTaskShortData *)doCopyId:(int32_t)id description:(NSString *)description __attribute__((swift_name("doCopy(id:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessFigure")))
@interface AppChessFigure : AppBase
- (instancetype)initWithFigureType:(AppChessFigureType *)figureType color:(AppChessFigureColor *)color position:(AppFigurePosition *)position __attribute__((swift_name("init(figureType:color:position:)"))) __attribute__((objc_designated_initializer));
- (AppChessFigureType *)component1 __attribute__((swift_name("component1()")));
- (AppChessFigureColor *)component2 __attribute__((swift_name("component2()")));
- (AppFigurePosition *)component3 __attribute__((swift_name("component3()")));
- (AppChessFigure *)doCopyFigureType:(AppChessFigureType *)figureType color:(AppChessFigureColor *)color position:(AppFigurePosition *)position __attribute__((swift_name("doCopy(figureType:color:position:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppChessFigureColor *color __attribute__((swift_name("color")));
@property (readonly) AppChessFigureType *figureType __attribute__((swift_name("figureType")));
@property (readonly) AppFigurePosition *position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessFigureColor")))
@interface AppChessFigureColor : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppChessFigureColor *white __attribute__((swift_name("white")));
@property (class, readonly) AppChessFigureColor *black __attribute__((swift_name("black")));
- (int32_t)compareToOther:(AppChessFigureColor *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessFigureType")))
@interface AppChessFigureType : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppChessFigureType *pawn __attribute__((swift_name("pawn")));
@property (class, readonly) AppChessFigureType *bishop __attribute__((swift_name("bishop")));
@property (class, readonly) AppChessFigureType *knight __attribute__((swift_name("knight")));
@property (class, readonly) AppChessFigureType *rock __attribute__((swift_name("rock")));
@property (class, readonly) AppChessFigureType *queen __attribute__((swift_name("queen")));
@property (class, readonly) AppChessFigureType *king __attribute__((swift_name("king")));
- (int32_t)compareToOther:(AppChessFigureType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FigurePosition")))
@interface AppFigurePosition : AppBase
- (instancetype)initWithRow:(int32_t)row column:(int32_t)column __attribute__((swift_name("init(row:column:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (AppFigurePosition *)doCopyRow:(int32_t)row column:(int32_t)column __attribute__((swift_name("doCopy(row:column:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t row __attribute__((swift_name("row")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PgnMove")))
@interface AppPgnMove : AppBase
- (instancetype)initWithFigureType:(AppChessFigureType *)figureType figureColor:(AppChessFigureColor *)figureColor destination:(AppFigurePosition *)destination start:(AppFigurePosition * _Nullable)start takeOppositeFigure:(BOOL)takeOppositeFigure promotedFigure:(AppChessFigureType * _Nullable)promotedFigure __attribute__((swift_name("init(figureType:figureColor:destination:start:takeOppositeFigure:promotedFigure:)"))) __attribute__((objc_designated_initializer));
- (AppChessFigureType *)component1 __attribute__((swift_name("component1()")));
- (AppChessFigureColor *)component2 __attribute__((swift_name("component2()")));
- (AppFigurePosition *)component3 __attribute__((swift_name("component3()")));
- (AppFigurePosition * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (AppChessFigureType * _Nullable)component6 __attribute__((swift_name("component6()")));
- (AppPgnMove *)doCopyFigureType:(AppChessFigureType *)figureType figureColor:(AppChessFigureColor *)figureColor destination:(AppFigurePosition *)destination start:(AppFigurePosition * _Nullable)start takeOppositeFigure:(BOOL)takeOppositeFigure promotedFigure:(AppChessFigureType * _Nullable)promotedFigure __attribute__((swift_name("doCopy(figureType:figureColor:destination:start:takeOppositeFigure:promotedFigure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppFigurePosition *destination __attribute__((swift_name("destination")));
@property (readonly) AppChessFigureColor *figureColor __attribute__((swift_name("figureColor")));
@property (readonly) AppChessFigureType *figureType __attribute__((swift_name("figureType")));
@property (readonly) AppChessFigureType * _Nullable promotedFigure __attribute__((swift_name("promotedFigure")));
@property (readonly) AppFigurePosition * _Nullable start __attribute__((swift_name("start")));
@property (readonly) BOOL takeOppositeFigure __attribute__((swift_name("takeOppositeFigure")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PgnMovePair")))
@interface AppPgnMovePair : AppBase
- (instancetype)initWithWhiteMove:(AppPgnMove * _Nullable)whiteMove blackMove:(AppPgnMove * _Nullable)blackMove __attribute__((swift_name("init(whiteMove:blackMove:)"))) __attribute__((objc_designated_initializer));
- (AppPgnMove * _Nullable)component1 __attribute__((swift_name("component1()")));
- (AppPgnMove * _Nullable)component2 __attribute__((swift_name("component2()")));
- (AppPgnMovePair *)doCopyWhiteMove:(AppPgnMove * _Nullable)whiteMove blackMove:(AppPgnMove * _Nullable)blackMove __attribute__((swift_name("doCopy(whiteMove:blackMove:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppPgnMove * _Nullable blackMove __attribute__((swift_name("blackMove")));
@property (readonly) AppPgnMove * _Nullable whiteMove __attribute__((swift_name("whiteMove")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizationUserData")))
@interface AppAuthorizationUserData : AppBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AppAuthorizationUserData *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizationUserData.Companion")))
@interface AppAuthorizationUserDataCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserToken")))
@interface AppUserToken : AppBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AppUserToken *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserToken.Companion")))
@interface AppUserTokenCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListPresenter")))
@interface AppTasksListPresenter : AppBase
- (instancetype)initWithListReducer:(AppTasksListReducer *)listReducer __attribute__((swift_name("init(listReducer:)"))) __attribute__((objc_designated_initializer));
- (void)attachViewPresenterView:(id<AppTasksListView>)presenterView __attribute__((swift_name("attachView(presenterView:)")));
- (void)detachView __attribute__((swift_name("detachView()")));
- (void)refreshTasks __attribute__((swift_name("refreshTasks()")));
@end;

__attribute__((swift_name("TasksListView")))
@protocol AppTasksListView
@required
- (void)displayMessageNewsMessage:(AppTasksListMessageId *)newsMessage __attribute__((swift_name("displayMessage(newsMessage:)")));
- (void)loadedTaskReadyTask:(AppChessTask *)task __attribute__((swift_name("loadedTaskReady(task:)")));
- (void)navigateToDestination:(AppTasksListDestinationId *)destination __attribute__((swift_name("navigateTo(destination:)")));
- (void)setLoadingVisibilityVisible:(BOOL)visible __attribute__((swift_name("setLoadingVisibility(visible:)")));
- (void)updateTasksListList:(NSArray<AppChessTaskShortData *> *)list __attribute__((swift_name("updateTasksList(list:)")));
@property void (^ _Nullable logoutCallback)(void) __attribute__((swift_name("logoutCallback")));
@property void (^ _Nullable selectedTaskCallback)(AppInt *) __attribute__((swift_name("selectedTaskCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListReducer")))
@interface AppTasksListReducer : AppBase
- (instancetype)initWithLoggedUserRepository:(AppLoggedUserRepository *)loggedUserRepository tasksApi:(AppTasksListApi *)tasksApi taskApi:(AppSingleTaskApi *)taskApi __attribute__((swift_name("init(loggedUserRepository:tasksApi:taskApi:)"))) __attribute__((objc_designated_initializer));
- (void)getTaskByIdId:(int32_t)id __attribute__((swift_name("getTaskById(id:)")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)refreshTasks __attribute__((swift_name("refreshTasks()")));
@property void (^ _Nullable newsCallback)(AppTasksListNews *) __attribute__((swift_name("newsCallback")));
@property void (^ _Nullable updateStateCallback)(AppTasksListState *) __attribute__((swift_name("updateStateCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListNews")))
@interface AppTasksListNews : AppBase
- (instancetype)initWithId:(AppTasksListNewsId *)id data:(id _Nullable)data __attribute__((swift_name("init(id:data:)"))) __attribute__((objc_designated_initializer));
- (AppTasksListNewsId *)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (AppTasksListNews *)doCopyId:(AppTasksListNewsId *)id data:(id _Nullable)data __attribute__((swift_name("doCopy(id:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@property (readonly) AppTasksListNewsId *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListState")))
@interface AppTasksListState : AppBase
- (instancetype)initWithLoadingActive:(BOOL)loadingActive loadedTasks:(NSArray<AppChessTaskShortData *> *)loadedTasks __attribute__((swift_name("init(loadingActive:loadedTasks:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSArray<AppChessTaskShortData *> *)component2 __attribute__((swift_name("component2()")));
- (AppTasksListState *)doCopyLoadingActive:(BOOL)loadingActive loadedTasks:(NSArray<AppChessTaskShortData *> *)loadedTasks __attribute__((swift_name("doCopy(loadingActive:loadedTasks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AppChessTaskShortData *> *loadedTasks __attribute__((swift_name("loadedTasks")));
@property (readonly) BOOL loadingActive __attribute__((swift_name("loadingActive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListDestinationId")))
@interface AppTasksListDestinationId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppTasksListDestinationId *loginScreen __attribute__((swift_name("loginScreen")));
@property (class, readonly) AppTasksListDestinationId *singleTask __attribute__((swift_name("singleTask")));
- (int32_t)compareToOther:(AppTasksListDestinationId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListMessageId")))
@interface AppTasksListMessageId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppTasksListMessageId *nullUserToken __attribute__((swift_name("nullUserToken")));
@property (class, readonly) AppTasksListMessageId *requestException __attribute__((swift_name("requestException")));
@property (class, readonly) AppTasksListMessageId *loadedTaskNull __attribute__((swift_name("loadedTaskNull")));
- (int32_t)compareToOther:(AppTasksListMessageId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksListNewsId")))
@interface AppTasksListNewsId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppTasksListNewsId *nullTokenError __attribute__((swift_name("nullTokenError")));
@property (class, readonly) AppTasksListNewsId *requestException __attribute__((swift_name("requestException")));
@property (class, readonly) AppTasksListNewsId *logout __attribute__((swift_name("logout")));
@property (class, readonly) AppTasksListNewsId *navigateToTask __attribute__((swift_name("navigateToTask")));
- (int32_t)compareToOther:(AppTasksListNewsId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("LoginView")))
@protocol AppLoginView
@required
- (void)displayMessageMessageId:(AppLoginMessageId *)messageId __attribute__((swift_name("displayMessage(messageId:)")));
- (void)navigateToDestination_:(AppOnBoardingDestinationId *)destination __attribute__((swift_name("navigateTo(destination_:)")));
- (void)setLoadingIsLoading:(BOOL)isLoading __attribute__((swift_name("setLoading(isLoading:)")));
- (void)setLoginButtonEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setLoginButtonEnabled(isEnabled:)")));
- (void)setLoginTextEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setLoginTextEnabled(isEnabled:)")));
- (void)setPasswordTextEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setPasswordTextEnabled(isEnabled:)")));
- (void)setRegisterButtonEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setRegisterButtonEnabled(isEnabled:)")));
@property void (^ _Nullable credentialsChangeCallback)(NSArray<NSString *> *) __attribute__((swift_name("credentialsChangeCallback")));
@property void (^ _Nullable loginCallback)(void) __attribute__((swift_name("loginCallback")));
@property void (^ _Nullable registerCallback)(void) __attribute__((swift_name("registerCallback")));
@end;

__attribute__((swift_name("RegisterView")))
@protocol AppRegisterView
@required
- (void)displayMessageMessageId:(AppLoginMessageId *)messageId __attribute__((swift_name("displayMessage(messageId:)")));
- (void)navigateToDestination_:(AppOnBoardingDestinationId *)destination __attribute__((swift_name("navigateTo(destination_:)")));
- (void)setBackButtonEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setBackButtonEnabled(isEnabled:)")));
- (void)setLoadingIsLoading:(BOOL)isLoading __attribute__((swift_name("setLoading(isLoading:)")));
- (void)setLoginTextEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setLoginTextEnabled(isEnabled:)")));
- (void)setPasswordTextEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setPasswordTextEnabled(isEnabled:)")));
- (void)setRegisterButtonEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setRegisterButtonEnabled(isEnabled:)")));
@property void (^ _Nullable backCallback)(void) __attribute__((swift_name("backCallback")));
@property void (^ _Nullable credentialsChangeCallback)(NSArray<NSString *> *) __attribute__((swift_name("credentialsChangeCallback")));
@property void (^ _Nullable registerCallback)(void) __attribute__((swift_name("registerCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginState")))
@interface AppLoginState : AppBase
- (instancetype)initWithLoginButtonEnabled:(BOOL)loginButtonEnabled registrationButtonEnabled:(BOOL)registrationButtonEnabled loadingActive:(BOOL)loadingActive loginTextFieldEnabled:(BOOL)loginTextFieldEnabled passwordTextField:(BOOL)passwordTextField __attribute__((swift_name("init(loginButtonEnabled:registrationButtonEnabled:loadingActive:loginTextFieldEnabled:passwordTextField:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (AppLoginState *)doCopyLoginButtonEnabled:(BOOL)loginButtonEnabled registrationButtonEnabled:(BOOL)registrationButtonEnabled loadingActive:(BOOL)loadingActive loginTextFieldEnabled:(BOOL)loginTextFieldEnabled passwordTextField:(BOOL)passwordTextField __attribute__((swift_name("doCopy(loginButtonEnabled:registrationButtonEnabled:loadingActive:loginTextFieldEnabled:passwordTextField:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL loadingActive __attribute__((swift_name("loadingActive")));
@property (readonly) BOOL loginButtonEnabled __attribute__((swift_name("loginButtonEnabled")));
@property (readonly) BOOL loginTextFieldEnabled __attribute__((swift_name("loginTextFieldEnabled")));
@property (readonly) BOOL passwordTextField __attribute__((swift_name("passwordTextField")));
@property (readonly) BOOL registrationButtonEnabled __attribute__((swift_name("registrationButtonEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationState")))
@interface AppRegistrationState : AppBase
- (instancetype)initWithBackButtonEnabled:(BOOL)backButtonEnabled registrationButtonEnabled:(BOOL)registrationButtonEnabled loadingActive:(BOOL)loadingActive loginTextFieldEnabled:(BOOL)loginTextFieldEnabled passwordTextField:(BOOL)passwordTextField __attribute__((swift_name("init(backButtonEnabled:registrationButtonEnabled:loadingActive:loginTextFieldEnabled:passwordTextField:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (AppRegistrationState *)doCopyBackButtonEnabled:(BOOL)backButtonEnabled registrationButtonEnabled:(BOOL)registrationButtonEnabled loadingActive:(BOOL)loadingActive loginTextFieldEnabled:(BOOL)loginTextFieldEnabled passwordTextField:(BOOL)passwordTextField __attribute__((swift_name("doCopy(backButtonEnabled:registrationButtonEnabled:loadingActive:loginTextFieldEnabled:passwordTextField:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL backButtonEnabled __attribute__((swift_name("backButtonEnabled")));
@property (readonly) BOOL loadingActive __attribute__((swift_name("loadingActive")));
@property (readonly) BOOL loginTextFieldEnabled __attribute__((swift_name("loginTextFieldEnabled")));
@property (readonly) BOOL passwordTextField __attribute__((swift_name("passwordTextField")));
@property (readonly) BOOL registrationButtonEnabled __attribute__((swift_name("registrationButtonEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginMessageId")))
@interface AppLoginMessageId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppLoginMessageId *requestException __attribute__((swift_name("requestException")));
@property (class, readonly) AppLoginMessageId *unknownDestination __attribute__((swift_name("unknownDestination")));
- (int32_t)compareToOther:(AppLoginMessageId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnBoardingDestinationId")))
@interface AppOnBoardingDestinationId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppOnBoardingDestinationId *unknownDestination __attribute__((swift_name("unknownDestination")));
@property (class, readonly) AppOnBoardingDestinationId *tasksListScreen __attribute__((swift_name("tasksListScreen")));
@property (class, readonly) AppOnBoardingDestinationId *registerScreen __attribute__((swift_name("registerScreen")));
@property (class, readonly) AppOnBoardingDestinationId *loginScreen __attribute__((swift_name("loginScreen")));
- (int32_t)compareToOther:(AppOnBoardingDestinationId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnBoardingNewsId")))
@interface AppOnBoardingNewsId : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppOnBoardingNewsId *requestException __attribute__((swift_name("requestException")));
@property (class, readonly) AppOnBoardingNewsId *navigateToTasksList __attribute__((swift_name("navigateToTasksList")));
@property (class, readonly) AppOnBoardingNewsId *navigateToRegister __attribute__((swift_name("navigateToRegister")));
@property (class, readonly) AppOnBoardingNewsId *navigateToLogin __attribute__((swift_name("navigateToLogin")));
- (int32_t)compareToOther:(AppOnBoardingNewsId *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginPresenter")))
@interface AppLoginPresenter : AppBase
- (instancetype)initWithReducer:(AppLoginReducer *)reducer __attribute__((swift_name("init(reducer:)"))) __attribute__((objc_designated_initializer));
- (void)attachViewPresenterView:(id<AppLoginView>)presenterView __attribute__((swift_name("attachView(presenterView:)")));
- (void)detachView __attribute__((swift_name("detachView()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterPresenter")))
@interface AppRegisterPresenter : AppBase
- (instancetype)initWithReducer:(AppRegisterReducer *)reducer __attribute__((swift_name("init(reducer:)"))) __attribute__((objc_designated_initializer));
- (void)attachViewPresenterView:(id<AppRegisterView>)presenterView __attribute__((swift_name("attachView(presenterView:)")));
- (void)detachView __attribute__((swift_name("detachView()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginReducer")))
@interface AppLoginReducer : AppBase
- (instancetype)initWithLoggedUserRepository:(AppLoggedUserRepository *)loggedUserRepository userApi:(AppUserApi *)userApi __attribute__((swift_name("init(loggedUserRepository:userApi:)"))) __attribute__((objc_designated_initializer));
- (void)authorizationDataChangeData:(AppAuthorizationUserData *)data __attribute__((swift_name("authorizationDataChange(data:)")));
- (void)moveToRegister __attribute__((swift_name("moveToRegister()")));
- (void)tryToLoading __attribute__((swift_name("tryToLoading()")));
@property void (^ _Nullable newsCallback)(AppOnBoardingNewsId *) __attribute__((swift_name("newsCallback")));
@property void (^ _Nullable updateStateCallback)(AppLoginState *) __attribute__((swift_name("updateStateCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterReducer")))
@interface AppRegisterReducer : AppBase
- (instancetype)initWithLoggedUserRepository:(AppLoggedUserRepository *)loggedUserRepository userApi:(AppUserApi *)userApi __attribute__((swift_name("init(loggedUserRepository:userApi:)"))) __attribute__((objc_designated_initializer));
- (void)authorizationDataChangeData:(AppAuthorizationUserData *)data __attribute__((swift_name("authorizationDataChange(data:)")));
- (void)moveToLogin __attribute__((swift_name("moveToLogin()")));
- (void)tryToRegister __attribute__((swift_name("tryToRegister()")));
@property void (^ _Nullable newsCallback)(AppOnBoardingNewsId *) __attribute__((swift_name("newsCallback")));
@property void (^ _Nullable updateStateCallback)(AppRegistrationState *) __attribute__((swift_name("updateStateCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstantsKt")))
@interface AppConstantsKt : AppBase
@property (class, readonly) NSString *PREFS_NAME __attribute__((swift_name("PREFS_NAME")));
@property (class, readonly) int32_t MAX_BOARD_INDEX __attribute__((swift_name("MAX_BOARD_INDEX")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstKt")))
@interface AppConstKt : AppBase
@property (class, readonly) NSString *API_VERSION __attribute__((swift_name("API_VERSION")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessTaskFenParserKt")))
@interface AppChessTaskFenParserKt : AppBase
+ (AppChessFigureColor *)getStartingColorFenString:(NSString * _Nullable)fenString __attribute__((swift_name("getStartingColor(fenString:)")));
+ (NSArray<AppChessFigure *> *)getStartingPositionsFenString:(NSString * _Nullable)fenString __attribute__((swift_name("getStartingPositions(fenString:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChessTaskPgnParserKt")))
@interface AppChessTaskPgnParserKt : AppBase
+ (NSArray<AppPgnMovePair *> *)parsePgnStringPgn:(NSString *)pgn __attribute__((swift_name("parsePgnString(pgn:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValidatorsKt")))
@interface AppDataValidatorsKt : AppBase
+ (BOOL)isUserDataCorrectData:(AppAuthorizationUserData *)data __attribute__((swift_name("isUserDataCorrect(data:)")));
@property (class, readonly) int32_t MIN_EMAIL_LENGTH __attribute__((swift_name("MIN_EMAIL_LENGTH")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AppKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AppKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AppKotlinCoroutineContextElement> _Nullable)getKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AppKotlinCoroutineContext>)minusKeyKey:(id<AppKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AppKotlinCoroutineContext>)plusContext:(id<AppKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AppKotlinCoroutineContextElement <AppKotlinCoroutineContext>
@required
@property (readonly) id<AppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol AppKotlinx_coroutines_coreJob <AppKotlinCoroutineContextElement>
@required
- (id<AppKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<AppKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(AppKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (AppKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<AppKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(AppKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<AppKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(AppKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<AppKotlinx_coroutines_coreJob>)plusOther:(id<AppKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<AppKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<AppKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCompletableJob")))
@protocol AppKotlinx_coroutines_coreCompletableJob <AppKotlinx_coroutines_coreJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(AppKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface AppKotlinThrowable : AppBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (AppKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface AppKotlinException : AppKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol AppKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<AppKotlinx_serialization_runtimeEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol AppKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AppKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<AppKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol AppKotlinx_serialization_runtimeKSerializer <AppKotlinx_serialization_runtimeSerializationStrategy, AppKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AppKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol AppKotlinx_coroutines_coreChildHandle <AppKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(AppKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol AppKotlinx_coroutines_coreChildJob <AppKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<AppKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface AppKotlinRuntimeException : AppKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AppKotlinIllegalStateException : AppKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface AppKotlinx_coroutines_coreCancellationException : AppKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(AppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol AppKotlinSequence
@required
- (id<AppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol AppKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<AppKotlinx_coroutines_coreSelectInstance>)select block:(id<AppKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AppKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AppKotlinArray : AppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(AppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol AppKotlinx_serialization_runtimeEncoder
@required
- (id<AppKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(AppKotlinArray *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)")));
- (id<AppKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeSerializers:(AppKotlinArray *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol AppKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<AppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AppKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<AppKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()"))) __attribute__((deprecated("Deprecated in the favour of 'annotations' property")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AppKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AppKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name"))) __attribute__((unavailable("name property deprecated in the favour of serialName")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol AppKotlinx_serialization_runtimeDecoder
@required
- (id<AppKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeParams:(AppKotlinArray *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) AppKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol AppKotlinx_coroutines_coreParentJob <AppKotlinx_coroutines_coreJob>
@required
- (AppKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol AppKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<AppKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(AppKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(AppKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(AppKotlinx_coroutines_corePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<AppKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol AppKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol AppKotlinSuspendFunction0 <AppKotlinFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol AppKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AppKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeUnitElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol AppKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<AppKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<AppKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<AppKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AppKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<AppKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AppKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface AppKotlinx_serialization_runtimeSerialKind : AppBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol AppKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:)")));
- (int16_t)decodeShortElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)decodeUnitElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDescriptor:(id<AppKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AppKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) AppKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AppKotlinNothing : AppBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface AppKotlinx_serialization_runtimeUpdateMode : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) AppKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(AppKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface AppKotlinx_coroutines_coreAtomicDesc : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(AppKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(AppKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@property AppKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface AppKotlinx_coroutines_coreOpDescriptor : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(AppKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AppKotlinx_coroutines_coreAtomicOp * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_corePrepareOp")))
@interface AppKotlinx_coroutines_corePrepareOp : AppKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(AppKotlinx_coroutines_coreLinkedListNode *)affected desc:(AppKotlinx_coroutines_coreAbstractAtomicDesc *)desc atomicOp:(AppKotlinx_coroutines_coreAtomicOp *)atomicOp __attribute__((swift_name("init(affected:desc:atomicOp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@property (readonly) AppKotlinx_coroutines_coreLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) AppKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) AppKotlinx_coroutines_coreAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol AppKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AppKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol AppKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<AppKotlinKClass>)kClass serializer:(id<AppKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AppKotlinKClass>)baseClass actualClass:(id<AppKotlinKClass>)actualClass actualSerializer:(id<AppKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AppKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AppKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AppKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AppKotlinKClass <AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface AppKotlinx_coroutines_coreAtomicOp : AppKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) AppKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLinkedListNode")))
@interface AppKotlinx_coroutines_coreLinkedListNode : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(AppKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(AppKotlinx_coroutines_coreLinkedListNode *)node condition:(AppBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(AppKotlinx_coroutines_coreLinkedListNode *)node predicate:(AppBoolean *(^)(AppKotlinx_coroutines_coreLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(AppKotlinx_coroutines_coreLinkedListNode *)node predicate:(AppBoolean *(^)(AppKotlinx_coroutines_coreLinkedListNode *))predicate condition:(AppBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(AppKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(AppBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (AppKotlinx_coroutines_coreLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly) AppKotlinx_coroutines_coreLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) AppKotlinx_coroutines_coreLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAbstractAtomicDesc")))
@interface AppKotlinx_coroutines_coreAbstractAtomicDesc : AppKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(AppKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(AppKotlinx_coroutines_coreLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(AppKotlinx_coroutines_coreLinkedListNode *)affected next:(AppKotlinx_coroutines_coreLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(AppKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (id _Nullable)onPreparePrepareOp:(AppKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (id _Nullable)prepareOp:(AppKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(AppKotlinx_coroutines_coreLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
@property (readonly) AppKotlinx_coroutines_coreLinkedListNode *affectedNode __attribute__((swift_name("affectedNode")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
