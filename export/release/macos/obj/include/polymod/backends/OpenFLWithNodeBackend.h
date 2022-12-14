#ifndef INCLUDED_polymod_backends_OpenFLWithNodeBackend
#define INCLUDED_polymod_backends_OpenFLWithNodeBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,OpenFLWithNodeBackend)
HX_DECLARE_CLASS2(polymod,backends,StubBackend)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES OpenFLWithNodeBackend_obj : public  ::polymod::backends::StubBackend_obj
{
	public:
		typedef  ::polymod::backends::StubBackend_obj super;
		typedef OpenFLWithNodeBackend_obj OBJ_;
		OpenFLWithNodeBackend_obj();

	public:
		enum { _hx_ClassId = 0x2723d14f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.OpenFLWithNodeBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.OpenFLWithNodeBackend"); }
		static ::hx::ObjectPtr< OpenFLWithNodeBackend_obj > __new();
		static ::hx::ObjectPtr< OpenFLWithNodeBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpenFLWithNodeBackend_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenFLWithNodeBackend",fc,63,b1,25); }

		static void __boot();
		static ::String FINISHED_PRELOADING_ASSETS;
};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_OpenFLWithNodeBackend */ 
