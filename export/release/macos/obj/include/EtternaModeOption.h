#ifndef INCLUDED_EtternaModeOption
#define INCLUDED_EtternaModeOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(EtternaModeOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES EtternaModeOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef EtternaModeOption_obj OBJ_;
		EtternaModeOption_obj();

	public:
		enum { _hx_ClassId = 0x7f75384d };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EtternaModeOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"EtternaModeOption"); }
		static ::hx::ObjectPtr< EtternaModeOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< EtternaModeOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EtternaModeOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EtternaModeOption",fd,70,fe,6e); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_EtternaModeOption */ 
