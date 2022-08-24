#ifndef INCLUDED_EAPayBox
#define INCLUDED_EAPayBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EAPayBox)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES EAPayBox_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EAPayBox_obj OBJ_;
		EAPayBox_obj();

	public:
		enum { _hx_ClassId = 0x7bb545bf };

		void __construct(int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EAPayBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"EAPayBox"); }
		static ::hx::ObjectPtr< EAPayBox_obj > __new(int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		static ::hx::ObjectPtr< EAPayBox_obj > __alloc(::hx::Ctx *_hx_ctx,int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EAPayBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EAPayBox",ff,52,24,20); }

		::Array< ::Dynamic> sprites;
};


#endif /* INCLUDED_EAPayBox */ 
