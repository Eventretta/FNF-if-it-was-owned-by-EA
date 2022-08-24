#ifndef INCLUDED_DownscrollOption
#define INCLUDED_DownscrollOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(DownscrollOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES DownscrollOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef DownscrollOption_obj OBJ_;
		DownscrollOption_obj();

	public:
		enum { _hx_ClassId = 0x524bb9a4 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DownscrollOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DownscrollOption"); }
		static ::hx::ObjectPtr< DownscrollOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< DownscrollOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DownscrollOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DownscrollOption",e4,06,6a,7c); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_DownscrollOption */ 
