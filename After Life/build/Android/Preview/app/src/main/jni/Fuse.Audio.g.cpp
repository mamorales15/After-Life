// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Versions.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.Bindings-f8058cd2.h>
#include <Fuse.Audio.SoundPlayer.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Compiler.ExportTa-d07b0040.h>
#include <Uno.Int.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace Audio{

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Fuse.Audio/1.0.2/android/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class SoundPlayer :25
// {
static void SoundPlayer_build(uType* type)
{
}

uType* SoundPlayer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SoundPlayer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Audio.SoundPlayer", options);
    type->fp_build_ = SoundPlayer_build;
    type->fp_ctor_ = (void*)SoundPlayer__New1_fn;
    return type;
}

// public generated SoundPlayer() :25
void SoundPlayer__ctor__fn(SoundPlayer* __this)
{
    __this->ctor_();
}

// public generated SoundPlayer New() :25
void SoundPlayer__New1_fn(SoundPlayer** __retval)
{
    *__retval = SoundPlayer::New1();
}

// private static void PlaySoundFromAFD(Java.Object afd) :33
void SoundPlayer__PlaySoundFromAFD_fn(::g::Java::Object* afd)
{
    SoundPlayer::PlaySoundFromAFD(afd);
}

// public static void PlaySoundFromBundle(Uno.UX.BundleFileSource fileSource) :27
void SoundPlayer__PlaySoundFromBundle_fn(::g::Uno::UX::BundleFileSource* fileSource)
{
    SoundPlayer::PlaySoundFromBundle(fileSource);
}

// public static void PlaySoundFromByteArray(byte[] byteArray) :118
void SoundPlayer__PlaySoundFromByteArray_fn(uArray* byteArray)
{
    SoundPlayer::PlaySoundFromByteArray(byteArray);
}

// private static void PlaySoundFromByteArrayInner(Java.Object unoStream) :84
void SoundPlayer__PlaySoundFromByteArrayInner_fn(::g::Java::Object* unoStream)
{
    SoundPlayer::PlaySoundFromByteArrayInner(unoStream);
}

// private static void PlaySoundFromMediaDataSource(Java.Object mediaDataSource) :59
void SoundPlayer__PlaySoundFromMediaDataSource_fn(::g::Java::Object* mediaDataSource)
{
    SoundPlayer::PlaySoundFromMediaDataSource(mediaDataSource);
}

// public generated SoundPlayer() [instance] :25
void SoundPlayer::ctor_()
{
}

// public generated SoundPlayer New() [static] :25
SoundPlayer* SoundPlayer::New1()
{
    SoundPlayer* obj1 = (SoundPlayer*)uNew(SoundPlayer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void PlaySoundFromAFD(Java.Object afd) [static] :33
void SoundPlayer::PlaySoundFromAFD(::g::Java::Object* afd)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PlaySoundFromAFD367", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uafd=afd;
        jobject _afd = (_uafd==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uafd, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_afd);
        
        if (_afd!=NULL) { U_JNIVAR->DeleteLocalRef(_afd); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void PlaySoundFromBundle(Uno.UX.BundleFileSource fileSource) [static] :27
void SoundPlayer::PlaySoundFromBundle(::g::Uno::UX::BundleFileSource* fileSource)
{
    uStackFrame __("Fuse.Audio.SoundPlayer", "PlaySoundFromBundle(Uno.UX.BundleFileSource)");
    SoundPlayer::PlaySoundFromAFD(::g::Fuse::Android::Bindings::AndroidDeviceInterop::OpenAssetFileDescriptor1(fileSource));
}

// public static void PlaySoundFromByteArray(byte[] byteArray) [static] :118
void SoundPlayer::PlaySoundFromByteArray(uArray* byteArray)
{
    uStackFrame __("Fuse.Audio.SoundPlayer", "PlaySoundFromByteArray(byte[])");
    ::g::Java::Object* buf = ::g::Uno::Compiler::ExportTargetInterop::ForeignDataView::Create(byteArray);

    if (::g::Android::Base::Versions::ApiLevel() < 23)
        SoundPlayer::PlaySoundFromByteArrayInner(::g::Fuse::Android::Bindings::AndroidDeviceInterop::MakeBufferInputStream(byteArray));
    else
        SoundPlayer::PlaySoundFromMediaDataSource(::g::Fuse::Android::Bindings::AndroidDeviceInterop::MakeMediaDataSource(byteArray));
}

// private static void PlaySoundFromByteArrayInner(Java.Object unoStream) [static] :84
void SoundPlayer::PlaySoundFromByteArrayInner(::g::Java::Object* unoStream)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PlaySoundFromByteArrayInner368", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uunoStream=unoStream;
        jobject _unoStream = (_uunoStream==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uunoStream, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_unoStream);
        
        if (_unoStream!=NULL) { U_JNIVAR->DeleteLocalRef(_unoStream); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void PlaySoundFromMediaDataSource(Java.Object mediaDataSource) [static] :59
void SoundPlayer::PlaySoundFromMediaDataSource(::g::Java::Object* mediaDataSource)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PlaySoundFromMediaDataSource369", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _umediaDataSource=mediaDataSource;
        jobject _mediaDataSource = (_umediaDataSource==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_umediaDataSource, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_mediaDataSource);
        
        if (_mediaDataSource!=NULL) { U_JNIVAR->DeleteLocalRef(_mediaDataSource); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}} // ::g::Fuse::Audio
