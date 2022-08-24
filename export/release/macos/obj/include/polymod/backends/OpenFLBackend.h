#ifndef INCLUDED_polymod_backends_OpenFLBackend
#define INCLUDED_polymod_backends_OpenFLBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeBackend)
HX_DECLARE_CLASS2(polymod,backends,OpenFLBackend)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES OpenFLBackend_obj : public  ::polymod::backends::LimeBackend_obj
{
	public:
		typedef  ::polymod::backends::LimeBackend_obj super;
		typedef OpenFLBackend_obj OBJ_;
		OpenFLBackend_obj();

	public:
		enum { _hx_ClassId = 0x12bf7dcf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.OpenFLBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.OpenFLBackend"); }
		static ::hx::ObjectPtr< OpenFLBackend_obj > __new();
		static ::hx::ObjectPtr< OpenFLBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpenFLBackend_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenFLBackend",44,fe,bb,33); }

		virtual void clearCache();

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_OpenFLBackend */ 
