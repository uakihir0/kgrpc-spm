#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KgrpcCoreCertificate, KgrpcCoreCertificateCompanion, KgrpcCoreChannel, KgrpcCoreChannelBuilder, KgrpcCoreChannelBuilderCompanion, KgrpcCoreChannelCompanion, KgrpcCoreCode, KgrpcCoreCodeCompanion, KgrpcCoreMetadata, KgrpcCoreMetadataCompanion, KgrpcCoreMethodDescriptor, KgrpcCoreMethodDescriptorMethodType, KgrpcCorePrivateKey, KgrpcCorePrivateKeyCompanion, KgrpcCoreStatus, KgrpcKGrpcFactory, KgrpcKotlinArray<T>, KgrpcKotlinByteArray, KgrpcKotlinByteIterator, KgrpcKotlinEnum<E>, KgrpcKotlinEnumCompanion, KgrpcKotlinException, KgrpcKotlinIllegalStateException, KgrpcKotlinPair<__covariant A, __covariant B>, KgrpcKotlinRuntimeException, KgrpcKotlinThrowable;

@protocol KgrpcCoreCallInterceptor, KgrpcCoreEntry, KgrpcCoreKeepAliveConfig, KgrpcCoreKey, KgrpcCoreMessage, KgrpcKotlinComparable, KgrpcKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KgrpcBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KgrpcBase (KgrpcBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KgrpcMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KgrpcMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKgrpcKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KgrpcNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface KgrpcByte : KgrpcNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KgrpcUByte : KgrpcNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KgrpcShort : KgrpcNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KgrpcUShort : KgrpcNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KgrpcInt : KgrpcNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KgrpcUInt : KgrpcNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KgrpcLong : KgrpcNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KgrpcULong : KgrpcNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KgrpcFloat : KgrpcNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KgrpcDouble : KgrpcNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KgrpcBoolean : KgrpcNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KGrpcFactory")))
@interface KgrpcKGrpcFactory : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kGrpcFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcKGrpcFactory *shared __attribute__((swift_name("shared")));
- (KgrpcCoreChannelBuilder *)channelHost:(NSString *)host port:(int32_t)port __attribute__((swift_name("channel(host:port:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel.Builder")))
@interface KgrpcCoreChannelBuilder : KgrpcBase
- (instancetype)initWithName:(NSString *)name port:(int32_t)port __attribute__((swift_name("init(name:port:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KgrpcCoreChannelBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KgrpcCoreChannel *)build __attribute__((swift_name("build()")));
- (KgrpcCoreChannelBuilder *)trustOnlyProvidedCertificates __attribute__((swift_name("trustOnlyProvidedCertificates()")));
- (KgrpcCoreChannelBuilder *)usePlaintext __attribute__((swift_name("usePlaintext()")));
- (KgrpcCoreChannelBuilder *)withClientIdentityCertificate:(KgrpcCoreCertificate *)certificate key:(KgrpcCorePrivateKey *)key __attribute__((swift_name("withClientIdentity(certificate:key:)")));
- (KgrpcCoreChannelBuilder *)withInterceptorsInterceptors:(KgrpcKotlinArray<id<KgrpcCoreCallInterceptor>> *)interceptors __attribute__((swift_name("withInterceptors(interceptors:)")));
- (KgrpcCoreChannelBuilder *)withKeepAliveConfigConfig:(id<KgrpcCoreKeepAliveConfig>)config __attribute__((swift_name("withKeepAliveConfig(config:)")));
- (KgrpcCoreChannelBuilder *)withTrustedCertificatesCertificates:(KgrpcKotlinArray<KgrpcCoreCertificate *> *)certificates __attribute__((swift_name("withTrustedCertificates(certificates:)")));
- (KgrpcCoreChannelBuilder *)withTrustedCertificatesCertificates_:(NSArray<KgrpcCoreCertificate *> *)certificates __attribute__((swift_name("withTrustedCertificates(certificates_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel.BuilderCompanion")))
@interface KgrpcCoreChannelBuilderCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCoreChannelBuilderCompanion *shared __attribute__((swift_name("shared")));
- (KgrpcCoreChannelBuilder *)forAddressName:(NSString *)name port:(int32_t)port __attribute__((swift_name("forAddress(name:port:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel")))
@interface KgrpcCoreChannel : KgrpcBase
@property (class, readonly, getter=companion) KgrpcCoreChannelCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)shutdownWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("shutdown(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)shutdownNowWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("shutdownNow(completionHandler:)")));
@property (readonly) BOOL isTerminated __attribute__((swift_name("isTerminated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCertificate")))
@interface KgrpcCoreCertificate : KgrpcBase
@property (class, readonly, getter=companion) KgrpcCoreCertificateCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePrivateKey")))
@interface KgrpcCorePrivateKey : KgrpcBase
@property (class, readonly, getter=companion) KgrpcCorePrivateKeyCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("CoreCallInterceptor")))
@protocol KgrpcCoreCallInterceptor
@required
- (KgrpcKotlinPair<KgrpcCoreStatus *, KgrpcCoreMetadata *> *)onCloseMethodDescriptor:(KgrpcCoreMethodDescriptor *)methodDescriptor status:(KgrpcCoreStatus *)status trailers:(KgrpcCoreMetadata *)trailers __attribute__((swift_name("onClose(methodDescriptor:status:trailers:)")));
- (KgrpcCoreMetadata *)onReceiveHeadersMethodDescriptor:(KgrpcCoreMethodDescriptor *)methodDescriptor metadata:(KgrpcCoreMetadata *)metadata __attribute__((swift_name("onReceiveHeaders(methodDescriptor:metadata:)")));
- (id<KgrpcCoreMessage>)onReceiveMessageMethodDescriptor:(KgrpcCoreMethodDescriptor *)methodDescriptor message:(id<KgrpcCoreMessage>)message __attribute__((swift_name("onReceiveMessage(methodDescriptor:message:)")));
- (id<KgrpcCoreMessage>)onSendMessageMethodDescriptor:(KgrpcCoreMethodDescriptor *)methodDescriptor message:(id<KgrpcCoreMessage>)message __attribute__((swift_name("onSendMessage(methodDescriptor:message:)")));
- (KgrpcCoreMetadata *)onStartMethodDescriptor:(KgrpcCoreMethodDescriptor *)methodDescriptor metadata:(KgrpcCoreMetadata *)metadata __attribute__((swift_name("onStart(methodDescriptor:metadata:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KgrpcKotlinArray<T> : KgrpcBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KgrpcInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KgrpcKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("CoreKeepAliveConfig")))
@protocol KgrpcCoreKeepAliveConfig
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel.Companion")))
@interface KgrpcCoreChannelCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCoreChannelCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KgrpcKotlinThrowable : KgrpcBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KgrpcKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KgrpcKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KgrpcKotlinException : KgrpcKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KgrpcKotlinRuntimeException : KgrpcKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KgrpcKotlinIllegalStateException : KgrpcKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KgrpcKotlinCancellationException : KgrpcKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KgrpcKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCertificate.Companion")))
@interface KgrpcCoreCertificateCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCoreCertificateCompanion *shared __attribute__((swift_name("shared")));
- (KgrpcCoreCertificate *)fromByteArrayByteArray:(KgrpcKotlinByteArray *)byteArray __attribute__((swift_name("fromByteArray(byteArray:)")));
- (KgrpcCoreCertificate *)fromPemContent:(NSString *)content __attribute__((swift_name("fromPem(content:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePrivateKey.Companion")))
@interface KgrpcCorePrivateKeyCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCorePrivateKeyCompanion *shared __attribute__((swift_name("shared")));
- (KgrpcCorePrivateKey *)fromByteArrayByteArray:(KgrpcKotlinByteArray *)byteArray __attribute__((swift_name("fromByteArray(byteArray:)")));
- (KgrpcCorePrivateKey *)fromPemContent:(NSString *)content __attribute__((swift_name("fromPem(content:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatus")))
@interface KgrpcCoreStatus : KgrpcBase
- (instancetype)initWithCode:(KgrpcCoreCode *)code statusMessage:(NSString *)statusMessage __attribute__((swift_name("init(code:statusMessage:)"))) __attribute__((objc_designated_initializer));
- (KgrpcCoreStatus *)doCopyCode:(KgrpcCoreCode *)code statusMessage:(NSString *)statusMessage __attribute__((swift_name("doCopy(code:statusMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KgrpcCoreCode *code __attribute__((swift_name("code")));
@property (readonly) NSString *statusMessage __attribute__((swift_name("statusMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetadata")))
@interface KgrpcCoreMetadata : KgrpcBase
@property (class, readonly, getter=companion) KgrpcCoreMetadataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(id<KgrpcCoreKey>)key __attribute__((swift_name("get(key:)")));
- (NSSet<id> *)getAllKey:(id<KgrpcCoreKey>)key __attribute__((swift_name("getAll(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KgrpcCoreMetadata *)minusKey:(id<KgrpcCoreKey>)key __attribute__((swift_name("minus(key:)")));
- (KgrpcCoreMetadata *)plusOther:(KgrpcCoreMetadata *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (KgrpcCoreMetadata *)withEntryKey:(id<KgrpcCoreKey>)key value:(id _Nullable)value __attribute__((swift_name("withEntry(key:value:)")));
@property (readonly) NSArray<id<KgrpcCoreEntry>> *entries __attribute__((swift_name("entries")));
@property (readonly) NSSet<id<KgrpcCoreKey>> *keys __attribute__((swift_name("keys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface KgrpcKotlinPair<__covariant A, __covariant B> : KgrpcBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (KgrpcKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMethodDescriptor")))
@interface KgrpcCoreMethodDescriptor : KgrpcBase
- (instancetype)initWithFullMethodName:(NSString *)fullMethodName methodType:(KgrpcCoreMethodDescriptorMethodType *)methodType __attribute__((swift_name("init(fullMethodName:methodType:)"))) __attribute__((objc_designated_initializer));
- (KgrpcCoreMethodDescriptor *)doCopyFullMethodName:(NSString *)fullMethodName methodType:(KgrpcCoreMethodDescriptorMethodType *)methodType __attribute__((swift_name("doCopy(fullMethodName:methodType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fullMethodName __attribute__((swift_name("fullMethodName")));
@property (readonly) KgrpcCoreMethodDescriptorMethodType *methodType __attribute__((swift_name("methodType")));
@end

__attribute__((swift_name("CoreMessage")))
@protocol KgrpcCoreMessage
@required
- (KgrpcKotlinByteArray *)serialize __attribute__((swift_name("serialize()")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@property (readonly) int32_t requiredSize __attribute__((swift_name("requiredSize")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KgrpcKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KgrpcKotlinByteArray : KgrpcBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KgrpcByte *(^)(KgrpcInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KgrpcKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KgrpcKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KgrpcKotlinEnum<E> : KgrpcBase <KgrpcKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KgrpcKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCode")))
@interface KgrpcCoreCode : KgrpcKotlinEnum<KgrpcCoreCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KgrpcCoreCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KgrpcCoreCode *ok __attribute__((swift_name("ok")));
@property (class, readonly) KgrpcCoreCode *cancelled __attribute__((swift_name("cancelled")));
@property (class, readonly) KgrpcCoreCode *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) KgrpcCoreCode *invalidArgument __attribute__((swift_name("invalidArgument")));
@property (class, readonly) KgrpcCoreCode *deadlineExceeded __attribute__((swift_name("deadlineExceeded")));
@property (class, readonly) KgrpcCoreCode *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) KgrpcCoreCode *alreadyExists __attribute__((swift_name("alreadyExists")));
@property (class, readonly) KgrpcCoreCode *permissionDenied __attribute__((swift_name("permissionDenied")));
@property (class, readonly) KgrpcCoreCode *resourceExhausted __attribute__((swift_name("resourceExhausted")));
@property (class, readonly) KgrpcCoreCode *failedPrecondition __attribute__((swift_name("failedPrecondition")));
@property (class, readonly) KgrpcCoreCode *aborted __attribute__((swift_name("aborted")));
@property (class, readonly) KgrpcCoreCode *outOfRange __attribute__((swift_name("outOfRange")));
@property (class, readonly) KgrpcCoreCode *unimplemented __attribute__((swift_name("unimplemented")));
@property (class, readonly) KgrpcCoreCode *internal __attribute__((swift_name("internal")));
@property (class, readonly) KgrpcCoreCode *unavailable __attribute__((swift_name("unavailable")));
@property (class, readonly) KgrpcCoreCode *dataLoss __attribute__((swift_name("dataLoss")));
@property (class, readonly) KgrpcCoreCode *unauthenticated __attribute__((swift_name("unauthenticated")));
+ (KgrpcKotlinArray<KgrpcCoreCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KgrpcCoreCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetadata.Companion")))
@interface KgrpcCoreMetadataCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCoreMetadataCompanion *shared __attribute__((swift_name("shared")));
- (KgrpcCoreMetadata *)empty __attribute__((swift_name("empty()")));
- (KgrpcCoreMetadata *)ofEntries:(KgrpcKotlinArray<id<KgrpcCoreEntry>> *)entries __attribute__((swift_name("of(entries:)")));
- (KgrpcCoreMetadata *)ofEntries_:(NSArray<id<KgrpcCoreEntry>> *)entries __attribute__((swift_name("of(entries_:)")));
- (KgrpcCoreMetadata *)ofKey:(id<KgrpcCoreKey>)key value:(id _Nullable)value __attribute__((swift_name("of(key:value:)")));
@end

__attribute__((swift_name("CoreKey")))
@protocol KgrpcCoreKey
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("CoreEntry")))
@protocol KgrpcCoreEntry
@required
@property (readonly) id<KgrpcCoreKey> key __attribute__((swift_name("key")));
@property (readonly) NSSet<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMethodDescriptor.MethodType")))
@interface KgrpcCoreMethodDescriptorMethodType : KgrpcKotlinEnum<KgrpcCoreMethodDescriptorMethodType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KgrpcCoreMethodDescriptorMethodType *unary __attribute__((swift_name("unary")));
@property (class, readonly) KgrpcCoreMethodDescriptorMethodType *serverStreaming __attribute__((swift_name("serverStreaming")));
@property (class, readonly) KgrpcCoreMethodDescriptorMethodType *clientStreaming __attribute__((swift_name("clientStreaming")));
@property (class, readonly) KgrpcCoreMethodDescriptorMethodType *bidiStreaming __attribute__((swift_name("bidiStreaming")));
+ (KgrpcKotlinArray<KgrpcCoreMethodDescriptorMethodType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KgrpcCoreMethodDescriptorMethodType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KgrpcKotlinByteIterator : KgrpcBase <KgrpcKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KgrpcByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KgrpcKotlinEnumCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCode.Companion")))
@interface KgrpcCoreCodeCompanion : KgrpcBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KgrpcCoreCodeCompanion *shared __attribute__((swift_name("shared")));
- (KgrpcCoreCode *)getCodeForValueValue:(int32_t)value __attribute__((swift_name("getCodeForValue(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
