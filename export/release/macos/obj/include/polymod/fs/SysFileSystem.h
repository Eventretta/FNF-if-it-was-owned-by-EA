#ifndef INCLUDED_polymod_fs_SysFileSystem
#define INCLUDED_polymod_fs_SysFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(polymod,ModMetadata)
HX_DECLARE_CLASS2(polymod,fs,IFileSystem)
HX_DECLARE_CLASS2(polymod,fs,SysFileSystem)

namespace polymod{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES SysFileSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SysFileSystem_obj OBJ_;
		SysFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x744a2635 };

		void __construct(::String modRoot);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.fs.SysFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.fs.SysFileSystem"); }
		static ::hx::ObjectPtr< SysFileSystem_obj > __new(::String modRoot);
		static ::hx::ObjectPtr< SysFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx,::String modRoot);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SysFileSystem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SysFileSystem",d8,91,e5,5e); }

		::String modRoot;
		bool exists(::String path);
		::Dynamic exists_dyn();

		bool isDirectory(::String path);
		::Dynamic isDirectory_dyn();

		::Array< ::String > readDirectory(::String path);
		::Dynamic readDirectory_dyn();

		::String getFileContent(::String path);
		::Dynamic getFileContent_dyn();

		 ::haxe::io::Bytes getFileBytes(::String path);
		::Dynamic getFileBytes_dyn();

		::Array< ::String > scanMods();
		::Dynamic scanMods_dyn();

		 ::polymod::ModMetadata getMetadata(::String modId);
		::Dynamic getMetadata_dyn();

		::Array< ::String > readDirectoryRecursive(::String path);
		::Dynamic readDirectoryRecursive_dyn();

		::Array< ::String > _readDirectoryRecursive(::String str);
		::Dynamic _readDirectoryRecursive_dyn();

};

} // end namespace polymod
} // end namespace fs

#endif /* INCLUDED_polymod_fs_SysFileSystem */ 
