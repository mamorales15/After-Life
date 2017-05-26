// This file was generated based on build/Android/Preview/cache/ux11/Song.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Song;}

namespace g{

// public partial sealed class Song :2
// {
::g::Fuse::Controls::Panel_type* Song_typeof();
void Song__ctor_9_fn(Song* __this);
void Song__get_File_fn(Song* __this, ::g::Uno::UX::FileSource** __retval);
void Song__set_File_fn(Song* __this, ::g::Uno::UX::FileSource* value);
void Song__InitializeUX1_fn(Song* __this);
void Song__get_Label_fn(Song* __this, uString** __retval);
void Song__set_Label_fn(Song* __this, uString* value);
void Song__New6_fn(Song** __retval);
void Song__SetFile_fn(Song* __this, ::g::Uno::UX::FileSource* value, uObject* origin);
void Song__SetLabel_fn(Song* __this, uString* value, uObject* origin);

struct Song : ::g::Fuse::Controls::Button
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable2;
    static uSStrong<uArray*> __g_static_nametable2_;
    static uSStrong<uArray*>& __g_static_nametable2() { return Song_typeof()->Init(), __g_static_nametable2_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Song_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Song_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Song_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::FileSource*> _field_File;
    uStrong<uString*> _field_Label;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_File_inst;
    uStrong< ::g::Uno::UX::Property1*> this_File_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Label_inst;

    void ctor_9();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void InitializeUX1();
    uString* Label();
    void Label(uString* value);
    void SetFile(::g::Uno::UX::FileSource* value, uObject* origin);
    void SetLabel(uString* value, uObject* origin);
    static Song* New6();
};
// }

} // ::g
