// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Audio/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PlaySound;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{

// public sealed class PlaySound :33
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlaySound_typeof();
void PlaySound__ctor_2_fn(PlaySound* __this);
void PlaySound__get_File_fn(PlaySound* __this, ::g::Uno::UX::FileSource** __retval);
void PlaySound__set_File_fn(PlaySound* __this, ::g::Uno::UX::FileSource* value);
void PlaySound__New2_fn(PlaySound** __retval);
void PlaySound__Perform_fn(PlaySound* __this, ::g::Fuse::Node* n);

struct PlaySound : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Uno::UX::FileSource*> _File;

    void ctor_2();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    static PlaySound* New2();
};
// }

}} // ::g::Fuse
