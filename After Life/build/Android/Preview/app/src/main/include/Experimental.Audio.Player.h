// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Audio{struct Channel;}}}
namespace g{namespace Experimental{namespace Audio{struct Player;}}}
namespace g{namespace Experimental{namespace Audio{struct Sound;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Experimental{
namespace Audio{

// public sealed class Player :209
// {
struct Player_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Player_type* Player_typeof();
void Player__ctor__fn(Player* __this);
void Player__AudioSystemShutdown_fn(int* newState);
void Player__AudioSystemStartup_fn();
void Player__CreateSound_fn(Player* __this, ::g::Uno::IO::BundleFile* file, ::g::Experimental::Audio::Sound** __retval);
void Player__Dispose_fn(Player* __this);
void Player__New1_fn(Player** __retval);
void Player__PlaySound_fn(Player* __this, ::g::Experimental::Audio::Sound* sound, bool* loop, ::g::Experimental::Audio::Channel** __retval);
void Player__ReleaseChannel_fn(Player* __this, ::g::Experimental::Audio::Channel* channel);

struct Player : uObject
{
    bool _canRelease;
    uStrong< ::g::Uno::Collections::List*> _channels;
    void* _handle;
    static bool firstPlayer_;
    static bool& firstPlayer() { return Player_typeof()->Init(), firstPlayer_; }

    void ctor_();
    ::g::Experimental::Audio::Sound* CreateSound(::g::Uno::IO::BundleFile* file);
    void Dispose();
    ::g::Experimental::Audio::Channel* PlaySound(::g::Experimental::Audio::Sound* sound, bool loop);
    void ReleaseChannel(::g::Experimental::Audio::Channel* channel);
    static void AudioSystemShutdown(int newState);
    static void AudioSystemStartup();
    static Player* New1();
};
// }

}}} // ::g::Experimental::Audio
