#ifndef INCLUDED_Option
#define INCLUDED_Option

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES Option_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Option_obj OBJ_;
		Option_obj();

	public:
		enum { _hx_ClassId = 0x27a70eb9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Option")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Option"); }
		static ::hx::ObjectPtr< Option_obj > __new();
		static ::hx::ObjectPtr< Option_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Option_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Option",95,47,0f,60); }

		::String description;
		::String display;
		::String getDisplay();
		::Dynamic getDisplay_dyn();

		::String getDescription();
		::Dynamic getDescription_dyn();

		virtual bool press();
		::Dynamic press_dyn();

		virtual ::String updateDisplay();
		::Dynamic updateDisplay_dyn();

};


#endif /* INCLUDED_Option */ 
