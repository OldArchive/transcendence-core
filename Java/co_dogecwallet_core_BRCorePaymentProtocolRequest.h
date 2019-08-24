/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class co_dogecwallet_core_BRCorePaymentProtocolRequest */

#ifndef _Included_co_dogecwallet_core_BRCorePaymentProtocolRequest
#define _Included_co_dogecwallet_core_BRCorePaymentProtocolRequest
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getNetwork
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getNetwork
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getOutputs
 * Signature: ()[Lco/_dogecwallet/core/BRCoreTransactionOutput;
 */
JNIEXPORT jobjectArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getOutputs
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getTime
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getExpires
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getExpires
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getMemo
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getMemo
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getPaymentURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getPaymentURL
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getMerchantData
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getMerchantData
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getVersion
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getVersion
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getPKIType
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getPKIType
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getPKIData
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getPKIData
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getSignature
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getSignature
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getDigest
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getDigest
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    getCerts
 * Signature: ()[[B
 */
JNIEXPORT jobjectArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_getCerts
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    createPaymentProtocolRequest
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_createPaymentProtocolRequest
(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    serialize
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_serialize
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_disposeNative
(JNIEnv *, jobject);

/*
 * Class:     co_dogecwallet_core_BRCorePaymentProtocolRequest
 * Method:    initializeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_co_dogecwallet_core_BRCorePaymentProtocolRequest_initializeNative
(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
