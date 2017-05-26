// This file was generated based on build/Android/Preview/cache/ux11/Song.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AfterLife_acces-9d4f7916.h>
#include <_root.AfterLife_acces-c2848b66.h>
#include <_root.AfterLife_FuseC-f7a6a50d.h>
#include <_root.AfterLife_FuseP-c7af5c2d.h>
#include <_root.AfterLife_Song_-793de48e.h>
#include <_root.AfterLife_Song_-f9946dae.h>
#include <_root.Song.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.PlaySound.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[5];

namespace g{

// public partial sealed class Song :2
// {
// static Song() :41
static void Song__cctor_5_fn(uType* __type)
{
    Song::__g_static_nametable2_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    Song::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Song::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Label"*/]);
    Song::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"File"*/]);
}

static void Song_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Label");
    ::STRINGS[2] = uString::Const("File");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(107,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Song, __g_nametable2), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Song, _field_File), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Song, _field_Label), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Song, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::Song, temp1_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::Song, this_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Song, this_Label_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Song::__g_static_nametable2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Song::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Song::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Song::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_File", NULL, (void*)Song__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)Song__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_Label", NULL, (void*)Song__get_Label_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Label", NULL, (void*)Song__set_Label_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Song__New6_fn, 0, true, type, 0),
        new uFunction("SetFile", NULL, (void*)Song__SetFile_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::UX::FileSource_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetLabel", NULL, (void*)Song__SetLabel_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* Song_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Button_typeof();
    options.FieldCount = 118;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Song);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Song", options);
    type->fp_build_ = Song_build;
    type->fp_ctor_ = (void*)Song__New6_fn;
    type->fp_cctor_ = Song__cctor_5_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Song() :45
void Song__ctor_9_fn(Song* __this)
{
    __this->ctor_9();
}

// public Uno.UX.FileSource get_File() :23
void Song__get_File_fn(Song* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :24
void Song__set_File_fn(Song* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private void InitializeUX() :49
void Song__InitializeUX1_fn(Song* __this)
{
    __this->InitializeUX1();
}

// public string get_Label() :8
void Song__get_Label_fn(Song* __this, uString** __retval)
{
    *__retval = __this->Label();
}

// public void set_Label(string value) :9
void Song__set_Label_fn(Song* __this, uString* value)
{
    __this->Label(value);
}

// public Song New() :45
void Song__New6_fn(Song** __retval)
{
    *__retval = Song::New6();
}

// public void SetFile(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) :26
void Song__SetFile_fn(Song* __this, ::g::Uno::UX::FileSource* value, uObject* origin)
{
    __this->SetFile(value, origin);
}

// public void SetLabel(string value, Uno.UX.IPropertyListener origin) :11
void Song__SetLabel_fn(Song* __this, uString* value, uObject* origin)
{
    __this->SetLabel(value, origin);
}

uSStrong<uArray*> Song::__g_static_nametable2_;
::g::Uno::UX::Selector Song::__selector0_;
::g::Uno::UX::Selector Song::__selector1_;
::g::Uno::UX::Selector Song::__selector2_;

// public Song() [instance] :45
void Song::ctor_9()
{
    uStackFrame __("Song", ".ctor()");
    ctor_8();
    InitializeUX1();
}

// public Uno.UX.FileSource get_File() [instance] :23
::g::Uno::UX::FileSource* Song::File()
{
    return _field_File;
}

// public void set_File(Uno.UX.FileSource value) [instance] :24
void Song::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Song", "set_File(Uno.UX.FileSource)");
    SetFile(value, NULL);
}

// private void InitializeUX() [instance] :49
void Song::InitializeUX1()
{
    uStackFrame __("Song", "InitializeUX()");
    ::g::Fuse::Reactive::This* temp2 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AfterLife_FuseControlsTextControl_Value_Property::New1(temp, Song::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::AfterLife_accessor_Song_Label::Singleton());
    this_Label_inst = ::g::AfterLife_Song_Label_Property::New1(this, Song::__selector1());
    this_File_inst = ::g::AfterLife_Song_File_Property::New1(this, Song::__selector2());
    __g_nametable2 = ::g::Uno::UX::NameTable::New1(NULL, Song::__g_static_nametable2());
    ::g::Fuse::Reactive::This* temp4 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::PlaySound* temp1 = ::g::Fuse::PlaySound::New2();
    temp1_File_inst = ::g::AfterLife_FusePlaySound_File_Property::New1(temp1, Song::__selector2());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::AfterLife_accessor_Song_File::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable2, 1);
    ::g::Fuse::Gestures::Pressed* temp7 = ::g::Fuse::Gestures::Pressed::New2();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp1_File_inst, (uObject*)temp5, __g_nametable2, 1);
    temp->FontSize(16.0f);
    temp->Color(::g::Uno::Float4__New2(0.06666667f, 0.06666667f, 0.06666667f, 1.0f));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    uPtr(__g_nametable2)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable2)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Label_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable2)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_File_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public string get_Label() [instance] :8
uString* Song::Label()
{
    return _field_Label;
}

// public void set_Label(string value) [instance] :9
void Song::Label(uString* value)
{
    uStackFrame __("Song", "set_Label(string)");
    SetLabel(value, NULL);
}

// public void SetFile(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) [instance] :26
void Song::SetFile(::g::Uno::UX::FileSource* value, uObject* origin)
{
    uStackFrame __("Song", "SetFile(Uno.UX.FileSource,Uno.UX.IPropertyListener)");

    if (value != _field_File)
    {
        _field_File = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"File"*/]), origin);
    }
}

// public void SetLabel(string value, Uno.UX.IPropertyListener origin) [instance] :11
void Song::SetLabel(uString* value, uObject* origin)
{
    uStackFrame __("Song", "SetLabel(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Label))
    {
        _field_Label = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Label"*/]), origin);
    }
}

// public Song New() [static] :45
Song* Song::New6()
{
    Song* obj1 = (Song*)uNew(Song_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

} // ::g
