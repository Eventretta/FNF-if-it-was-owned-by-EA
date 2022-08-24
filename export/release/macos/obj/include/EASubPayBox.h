#ifndef INCLUDED_EASubPayBox
#define INCLUDED_EASubPayBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EASubPayBox)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES EASubPayBox_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EASubPayBox_obj OBJ_;
		EASubPayBox_obj();

	public:
		enum { _hx_ClassId = 0x0acbf4d7 };

		void __construct(int genX,int genY, ::MusicBeatSubstate instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EASubPayBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"EASubPayBox"); }
		static ::hx::ObjectPtr< EASubPayBox_obj > __new(int genX,int genY, ::MusicBeatSubstate instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		static ::hx::ObjectPtr< EASubPayBox_obj > __alloc(::hx::Ctx *_hx_ctx,int genX,int genY, ::MusicBeatSubstate instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EASubPayBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EASubPayBox",27,6b,fe,28); }

		::Array< ::Dynamic> sprites;
};


#endif /* INCLUDED_EASubPayBox */ 
