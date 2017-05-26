// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Experimental.Audio/1.0.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Audio{struct Channel;}}}
namespace g{namespace Experimental{namespace Audio{struct Player;}}}

namespace g{
namespace Experimental{
namespace Audio{

// public sealed class Channel :12
// {
struct Channel_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Channel_type* Channel_typeof();
void Channel__ctor__fn(Channel* __this, void* handle, ::g::Experimental::Audio::Player* player);
void Channel__Dispose_fn(Channel* __this);
void Channel__Dispose1_fn(Channel* __this, bool* safeToFreeManaged);
void Channel__get_Handle_fn(Channel* __this, void** __retval);
void Channel__set_Handle_fn(Channel* __this, void* value);
void Channel__New1_fn(void* handle, ::g::Experimental::Audio::Player* player, Channel** __retval);
void Channel__Reset_fn(Channel* __this);

struct Channel : uObject
{
    void* _handle;
    bool _isDisposed;
    uStrong< ::g::Experimental::Audio::Player*> _player;

    void ctor_(void* handle, ::g::Experimental::Audio::Player* player);
    void Dispose();
    void Dispose1(bool safeToFreeManaged);
    void* Handle();
    void Handle(void* value);
    void Reset();
    static Channel* New1(void* handle, ::g::Experimental::Audio::Player* player);
};
// }

}}} // ::g::Experimental::Audio
