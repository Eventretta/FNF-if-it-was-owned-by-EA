#ifndef INCLUDED_FPSCapOption
#define INCLUDED_FPSCapOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_84c20c769231eb97_199_new)
HX_DECLARE_CLASS0(FPSCapOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES FPSCapOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef FPSCapOption_obj OBJ_;
		FPSCapOption_obj();

	public:
		enum { _hx_ClassId = 0x25e90a42 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FPSCapOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FPSCapOption"); }

		inline static ::hx::ObjectPtr< FPSCapOption_obj > __new(::String desc) {
			::hx::ObjectPtr< FPSCapOption_obj > __this = new FPSCapOption_obj();
			__this->__construct(desc);
			return __this;
		}

		inline static ::hx::ObjectPtr< FPSCapOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc) {
			FPSCapOption_obj *__this = (FPSCapOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPSCapOption_obj), true, "FPSCapOption"));
			*(void **)__this = FPSCapOption_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_199_new)
HXLINE( 200)		__this->super::__construct();
HXLINE( 201)		( ( ::Option)(__this) )->description = desc;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPSCapOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPSCapOption",1e,50,bd,0a); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_FPSCapOption */ 
