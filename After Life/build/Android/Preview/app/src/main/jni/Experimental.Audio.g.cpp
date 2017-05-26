// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Audio.Channel.h>
#include <Experimental.Audio.ChannelImpl.h>
#include <Experimental.Audio.Ch-bccea653.h>
#include <Experimental.Audio.Player.h>
#include <Experimental.Audio.PlayerImpl.h>
#include <Experimental.Audio.Pl-d3e6a73.h>
#include <Experimental.Audio.Sound.h>
#include <Experimental.Audio.SoundHandle.h>
#include <Experimental.Audio.SoundImpl.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Stream.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliSoundPlayer/SoundPlayer.h>
static uType* TYPES[3];

namespace g{
namespace Experimental{
namespace Audio{

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class Channel :12
// {
// ~Channel() :30
static void Channel__Finalize_fn(Channel* __this)
{
    uStackFrame __("Experimental.Audio.Channel", "Finalize()");
    __this->Dispose1(true);
}

static void Channel_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Channel_type, interface0));
    type->SetFields(0,
        ::g::Experimental::Audio::ChannelHandle_typeof(), offsetof(::g::Experimental::Audio::Channel, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Audio::Channel, _isDisposed), 0,
        ::g::Experimental::Audio::Player_typeof(), offsetof(::g::Experimental::Audio::Channel, _player), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Dispose", NULL, (void*)Channel__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Channel__New1_fn, 0, true, type, 2, ::g::Experimental::Audio::ChannelHandle_typeof(), ::g::Experimental::Audio::Player_typeof()));
}

Channel_type* Channel_typeof()
{
    static uSStrong<Channel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Channel);
    options.TypeSize = sizeof(Channel_type);
    type = (Channel_type*)uClassType::New("Experimental.Audio.Channel", options);
    type->fp_build_ = Channel_build;
    type->fp_Finalize = (void(*)(uObject*))Channel__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Channel__Dispose_fn;
    return type;
}

// public Channel(Experimental.Audio.ChannelHandle handle, Experimental.Audio.Player player) :23
void Channel__ctor__fn(Channel* __this, void* handle, ::g::Experimental::Audio::Player* player)
{
    __this->ctor_(handle, player);
}

// public void Dispose() :105
void Channel__Dispose_fn(Channel* __this)
{
    __this->Dispose();
}

// protected void Dispose(bool safeToFreeManaged) :91
void Channel__Dispose1_fn(Channel* __this, bool* safeToFreeManaged)
{
    __this->Dispose1(*safeToFreeManaged);
}

// private Experimental.Audio.ChannelHandle get_Handle() :19
void Channel__get_Handle_fn(Channel* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// private void set_Handle(Experimental.Audio.ChannelHandle value) :20
void Channel__set_Handle_fn(Channel* __this, void* value)
{
    __this->Handle(value);
}

// public Channel New(Experimental.Audio.ChannelHandle handle, Experimental.Audio.Player player) :23
void Channel__New1_fn(void* handle, ::g::Experimental::Audio::Player* player, Channel** __retval)
{
    *__retval = Channel::New1(handle, player);
}

// private void Reset() :86
void Channel__Reset_fn(Channel* __this)
{
    __this->Reset();
}

// public Channel(Experimental.Audio.ChannelHandle handle, Experimental.Audio.Player player) [instance] :23
void Channel::ctor_(void* handle, ::g::Experimental::Audio::Player* player)
{
    Handle(handle);
    _player = player;
    _isDisposed = false;
}

// public void Dispose() [instance] :105
void Channel::Dispose()
{
    uStackFrame __("Experimental.Audio.Channel", "Dispose()");
    Dispose1(true);
}

// protected void Dispose(bool safeToFreeManaged) [instance] :91
void Channel::Dispose1(bool safeToFreeManaged)
{
    uStackFrame __("Experimental.Audio.Channel", "Dispose(bool)");

    if (!_isDisposed)
    {
        _isDisposed = true;
        Reset();

        if (safeToFreeManaged)
        {
            if (_player != NULL)
                uPtr(_player)->ReleaseChannel(this);

            _player = NULL;
            ::g::Experimental::Audio::ChannelImpl::ReleaseChannel(_handle);
        }
    }
}

// private Experimental.Audio.ChannelHandle get_Handle() [instance] :19
void* Channel::Handle()
{
    return _handle;
}

// private void set_Handle(Experimental.Audio.ChannelHandle value) [instance] :20
void Channel::Handle(void* value)
{
    _handle = value;
}

// private void Reset() [instance] :86
void Channel::Reset()
{
    ::g::Experimental::Audio::ChannelImpl::ResetChannel(Handle());
}

// public Channel New(Experimental.Audio.ChannelHandle handle, Experimental.Audio.Player player) [static] :23
Channel* Channel::New1(void* handle, ::g::Experimental::Audio::Player* player)
{
    Channel* obj1 = (Channel*)uNew(Channel_typeof());
    obj1->ctor_(handle, player);
    return obj1;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public class ChannelHandle :112
// {
static void ChannelHandle_build(uType* type)
{
}

uType* ChannelHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ChannelHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.ChannelHandle", options);
    type->fp_build_ = ChannelHandle_build;
    return type;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class ChannelImpl :115
// {
static void ChannelImpl_build(uType* type)
{
}

uType* ChannelImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ChannelImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.ChannelImpl", options);
    type->fp_build_ = ChannelImpl_build;
    return type;
}

// public static void ReleaseChannel(Experimental.Audio.ChannelHandle handle) :161
void ChannelImpl__ReleaseChannel_fn(void* handle_)
{
    ChannelImpl::ReleaseChannel(handle_);
}

// public static void ResetChannel(Experimental.Audio.ChannelHandle handle) :158
void ChannelImpl__ResetChannel_fn(void* handle)
{
    ChannelImpl::ResetChannel(handle);
}

// public static void ReleaseChannel(Experimental.Audio.ChannelHandle handle) [static] :161
void ChannelImpl::ReleaseChannel(void* handle_)
{
    ((Xli::SoundChannel*)handle_)->Release();
}

// public static void ResetChannel(Experimental.Audio.ChannelHandle handle) [static] :158
void ChannelImpl::ResetChannel(void* handle)
{
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class Player :209
// {
// static Player() :209
static void Player__cctor__fn(uType* __type)
{
    Player::firstPlayer_ = true;
}

// ~Player() :228
static void Player__Finalize_fn(Player* __this)
{
}

static void Player_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Experimental::Audio::Channel_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Experimental::Audio::Channel_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Player_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Audio::Player, _canRelease), 0,
        ::TYPES[0/*Uno.Collections.List<Experimental.Audio.Channel>*/], offsetof(::g::Experimental::Audio::Player, _channels), 0,
        ::g::Experimental::Audio::PlayerHandle_typeof(), offsetof(::g::Experimental::Audio::Player, _handle), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Experimental::Audio::Player::firstPlayer_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("CreateSound", NULL, (void*)Player__CreateSound_fn, 0, false, ::g::Experimental::Audio::Sound_typeof(), 1, ::g::Uno::IO::BundleFile_typeof()),
        new uFunction("Dispose", NULL, (void*)Player__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Player__New1_fn, 0, true, type, 0),
        new uFunction("PlaySound", NULL, (void*)Player__PlaySound_fn, 0, false, ::g::Experimental::Audio::Channel_typeof(), 2, ::g::Experimental::Audio::Sound_typeof(), ::g::Uno::Bool_typeof()));
}

Player_type* Player_typeof()
{
    static uSStrong<Player_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(Player_type);
    type = (Player_type*)uClassType::New("Experimental.Audio.Player", options);
    type->fp_build_ = Player_build;
    type->fp_ctor_ = (void*)Player__New1_fn;
    type->fp_cctor_ = Player__cctor__fn;
    type->fp_Finalize = (void(*)(uObject*))Player__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Player__Dispose_fn;
    return type;
}

// public Player() :216
void Player__ctor__fn(Player* __this)
{
    __this->ctor_();
}

// private static void AudioSystemShutdown(Uno.Platform.ApplicationState newState) :294
void Player__AudioSystemShutdown_fn(int* newState)
{
    Player::AudioSystemShutdown(*newState);
}

// private static void AudioSystemStartup() :288
void Player__AudioSystemStartup_fn()
{
    Player::AudioSystemStartup();
}

// public Experimental.Audio.Sound CreateSound(Uno.IO.BundleFile file) :249
void Player__CreateSound_fn(Player* __this, ::g::Uno::IO::BundleFile* file, ::g::Experimental::Audio::Sound** __retval)
{
    *__retval = __this->CreateSound(file);
}

// public void Dispose() :232
void Player__Dispose_fn(Player* __this)
{
    __this->Dispose();
}

// public Player New() :216
void Player__New1_fn(Player** __retval)
{
    *__retval = Player::New1();
}

// public Experimental.Audio.Channel PlaySound(Experimental.Audio.Sound sound, bool loop) :258
void Player__PlaySound_fn(Player* __this, ::g::Experimental::Audio::Sound* sound, bool* loop, ::g::Experimental::Audio::Channel** __retval)
{
    *__retval = __this->PlaySound(sound, *loop);
}

// internal void ReleaseChannel(Experimental.Audio.Channel channel) :265
void Player__ReleaseChannel_fn(Player* __this, ::g::Experimental::Audio::Channel* channel)
{
    __this->ReleaseChannel(channel);
}

bool Player::firstPlayer_;

// public Player() [instance] :216
void Player::ctor_()
{
    if (Player::firstPlayer())
        Player::AudioSystemStartup();

    _handle = ::g::Experimental::Audio::PlayerImpl::Create();
    _channels = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Experimental.Audio.Channel>*/]));
    _canRelease = true;
}

// public Experimental.Audio.Sound CreateSound(Uno.IO.BundleFile file) [instance] :249
::g::Experimental::Audio::Sound* Player::CreateSound(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Experimental.Audio.Player", "CreateSound(Uno.IO.BundleFile)");
    return ::g::Experimental::Audio::Sound::New1(::g::Experimental::Audio::PlayerImpl::CreateSoundFromBundle(_handle, uPtr(file)->BundlePath(), uPtr(file)->OpenRead()));
}

// public void Dispose() [instance] :232
void Player::Dispose()
{
    uStackFrame __("Experimental.Audio.Player", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Experimental::Audio::Channel*> > ret5;
    ::g::Uno::Collections::List* channels = _channels;
    _channels = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Experimental::Audio::Channel*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(channels), &ret5), ret5); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<Experimental.Audio.Channel>.Enumerator*/]); )
    {
        ::g::Experimental::Audio::Channel* c = enum1.Current(::TYPES[2/*Uno.Collections.List<Experimental.Audio.Channel>.Enumerator*/]);
        uPtr(c)->Dispose();
    }
}

// public Experimental.Audio.Channel PlaySound(Experimental.Audio.Sound sound, bool loop) [instance] :258
::g::Experimental::Audio::Channel* Player::PlaySound(::g::Experimental::Audio::Sound* sound, bool loop)
{
    uStackFrame __("Experimental.Audio.Player", "PlaySound(Experimental.Audio.Sound,bool)");
    ::g::Experimental::Audio::Channel* c = ::g::Experimental::Audio::Channel::New1(::g::Experimental::Audio::PlayerImpl::PlaySound(_handle, uPtr(sound)->Handle(), loop), this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_channels), c);
    return c;
}

// internal void ReleaseChannel(Experimental.Audio.Channel channel) [instance] :265
void Player::ReleaseChannel(::g::Experimental::Audio::Channel* channel)
{
    uStackFrame __("Experimental.Audio.Player", "ReleaseChannel(Experimental.Audio.Channel)");
    bool ret8;

    if (_channels != NULL)
        ::g::Uno::Collections::List__Remove_fn(uPtr(_channels), channel, &ret8);
}

// private static void AudioSystemShutdown(Uno.Platform.ApplicationState newState) [static] :294
void Player::AudioSystemShutdown(int newState)
{
    Player_typeof()->Init();
    ::g::Experimental::Audio::PlayerImpl::Shutdown();
}

// private static void AudioSystemStartup() [static] :288
void Player::AudioSystemStartup()
{
    uStackFrame __("Experimental.Audio.Player", "AudioSystemStartup()");
    Player_typeof()->Init();
    Player::firstPlayer() = false;
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Player__AudioSystemShutdown_fn));
    ::g::Experimental::Audio::PlayerImpl::Startup();
}

// public Player New() [static] :216
Player* Player::New1()
{
    Player* obj4 = (Player*)uNew(Player_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public class PlayerHandle :301
// {
static void PlayerHandle_build(uType* type)
{
}

uType* PlayerHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PlayerHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.PlayerHandle", options);
    type->fp_build_ = PlayerHandle_build;
    return type;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class PlayerImpl :304
// {
static void PlayerImpl_build(uType* type)
{
}

uType* PlayerImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PlayerImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.PlayerImpl", options);
    type->fp_build_ = PlayerImpl_build;
    return type;
}

// public static Experimental.Audio.PlayerHandle Create() :313
void PlayerImpl__Create_fn(void** __retval)
{
    *__retval = PlayerImpl::Create();
}

// public static Experimental.Audio.SoundHandle CreateSoundFromBundle(Experimental.Audio.PlayerHandle handle, string path, Uno.IO.Stream stream) :316
void PlayerImpl__CreateSoundFromBundle_fn(void* handle_, uString* path_, ::g::Uno::IO::Stream* stream_, void** __retval)
{
    *__retval = PlayerImpl::CreateSoundFromBundle(handle_, path_, stream_);
}

// public static Experimental.Audio.ChannelHandle PlaySound(Experimental.Audio.PlayerHandle handle, Experimental.Audio.SoundHandle sound, bool loop) :319
void PlayerImpl__PlaySound_fn(void* handle_, void* sound_, bool* loop_, void** __retval)
{
    *__retval = PlayerImpl::PlaySound(handle_, sound_, *loop_);
}

// public static void Shutdown() :310
void PlayerImpl__Shutdown_fn()
{
    PlayerImpl::Shutdown();
}

// public static void Startup() :307
void PlayerImpl__Startup_fn()
{
    PlayerImpl::Startup();
}

// public static Experimental.Audio.PlayerHandle Create() [static] :313
void* PlayerImpl::Create()
{
    return ::Xli::SoundPlayer::Create();
}

// public static Experimental.Audio.SoundHandle CreateSoundFromBundle(Experimental.Audio.PlayerHandle handle, string path, Uno.IO.Stream stream) [static] :316
void* PlayerImpl::CreateSoundFromBundle(void* handle_, uString* path_, ::g::Uno::IO::Stream* stream_)
{
    return (((Xli::SoundPlayer*)handle_)->CreateSoundFromAsset(uStringToXliString( (path_) )));
}

// public static Experimental.Audio.ChannelHandle PlaySound(Experimental.Audio.PlayerHandle handle, Experimental.Audio.SoundHandle sound, bool loop) [static] :319
void* PlayerImpl::PlaySound(void* handle_, void* sound_, bool loop_)
{
    return ((Xli::SoundPlayer*)handle_)->PlaySound((Xli::Sound*)sound_,loop_);
}

// public static void Shutdown() [static] :310
void PlayerImpl::Shutdown()
{
}

// public static void Startup() [static] :307
void PlayerImpl::Startup()
{
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class Sound :164
// {
static void Sound_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Experimental::Audio::SoundHandle_typeof(), offsetof(::g::Experimental::Audio::Sound, _handle), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Handle", NULL, (void*)Sound__get_Handle_fn, 0, false, ::g::Experimental::Audio::SoundHandle_typeof(), 0),
        new uFunction("set_Handle", NULL, (void*)Sound__set_Handle_fn, 0, false, uVoid_typeof(), 1, ::g::Experimental::Audio::SoundHandle_typeof()),
        new uFunction(".ctor", NULL, (void*)Sound__New1_fn, 0, true, type, 1, ::g::Experimental::Audio::SoundHandle_typeof()));
}

uType* Sound_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Sound);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.Sound", options);
    type->fp_build_ = Sound_build;
    return type;
}

// public Sound(Experimental.Audio.SoundHandle handle) :173
void Sound__ctor__fn(Sound* __this, void* handle)
{
    __this->ctor_(handle);
}

// private void ClosingEvent(Uno.Platform.ApplicationState newState) :184
void Sound__ClosingEvent_fn(Sound* __this, int* newState)
{
    __this->ClosingEvent(*newState);
}

// public Experimental.Audio.SoundHandle get_Handle() :169
void Sound__get_Handle_fn(Sound* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// public void set_Handle(Experimental.Audio.SoundHandle value) :170
void Sound__set_Handle_fn(Sound* __this, void* value)
{
    __this->Handle(value);
}

// public Sound New(Experimental.Audio.SoundHandle handle) :173
void Sound__New1_fn(void* handle, Sound** __retval)
{
    *__retval = Sound::New1(handle);
}

// private void Reset() :189
void Sound__Reset_fn(Sound* __this)
{
    __this->Reset();
}

// public Sound(Experimental.Audio.SoundHandle handle) [instance] :173
void Sound::ctor_(void* handle)
{
    uStackFrame __("Experimental.Audio.Sound", ".ctor(Experimental.Audio.SoundHandle)");
    Handle(handle);
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Sound__ClosingEvent_fn, this));
}

// private void ClosingEvent(Uno.Platform.ApplicationState newState) [instance] :184
void Sound::ClosingEvent(int newState)
{
    Reset();
}

// public Experimental.Audio.SoundHandle get_Handle() [instance] :169
void* Sound::Handle()
{
    return _handle;
}

// public void set_Handle(Experimental.Audio.SoundHandle value) [instance] :170
void Sound::Handle(void* value)
{
    _handle = value;
}

// private void Reset() [instance] :189
void Sound::Reset()
{
    ::g::Experimental::Audio::SoundImpl::Reset(_handle);
}

// public Sound New(Experimental.Audio.SoundHandle handle) [static] :173
Sound* Sound::New1(void* handle)
{
    Sound* obj1 = (Sound*)uNew(Sound_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// public class SoundHandle :196
// {
static void SoundHandle_build(uType* type)
{
}

uType* SoundHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SoundHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.SoundHandle", options);
    type->fp_build_ = SoundHandle_build;
    return type;
}
// }

// /Users/martinmorales/Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class SoundImpl :199
// {
static void SoundImpl_build(uType* type)
{
}

uType* SoundImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SoundImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Audio.SoundImpl", options);
    type->fp_build_ = SoundImpl_build;
    return type;
}

// public static void Reset(Experimental.Audio.SoundHandle handle) :205
void SoundImpl__Reset_fn(void* handle)
{
    SoundImpl::Reset(handle);
}

// public static void Reset(Experimental.Audio.SoundHandle handle) [static] :205
void SoundImpl::Reset(void* handle)
{
}
// }

}}} // ::g::Experimental::Audio
