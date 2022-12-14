#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_39_new,"polymod.fs.SysFileSystem","new",0x6e978ee1,"polymod.fs.SysFileSystem.new","polymod/fs/SysFileSystem.hx",39,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_44_exists,"polymod.fs.SysFileSystem","exists",0x494ba5fb,"polymod.fs.SysFileSystem.exists","polymod/fs/SysFileSystem.hx",44,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_48_isDirectory,"polymod.fs.SysFileSystem","isDirectory",0x4f9d50a4,"polymod.fs.SysFileSystem.isDirectory","polymod/fs/SysFileSystem.hx",48,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_51_readDirectory,"polymod.fs.SysFileSystem","readDirectory",0xa764b5f8,"polymod.fs.SysFileSystem.readDirectory","polymod/fs/SysFileSystem.hx",51,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_54_getFileContent,"polymod.fs.SysFileSystem","getFileContent",0x6bbf8046,"polymod.fs.SysFileSystem.getFileContent","polymod/fs/SysFileSystem.hx",54,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_61_getFileBytes,"polymod.fs.SysFileSystem","getFileBytes",0x2af12e38,"polymod.fs.SysFileSystem.getFileBytes","polymod/fs/SysFileSystem.hx",61,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_68_scanMods,"polymod.fs.SysFileSystem","scanMods",0x79d70d6d,"polymod.fs.SysFileSystem.scanMods","polymod/fs/SysFileSystem.hx",68,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_85_getMetadata,"polymod.fs.SysFileSystem","getMetadata",0xc6e551a6,"polymod.fs.SysFileSystem.getMetadata","polymod/fs/SysFileSystem.hx",85,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_132_readDirectoryRecursive,"polymod.fs.SysFileSystem","readDirectoryRecursive",0x29cb565a,"polymod.fs.SysFileSystem.readDirectoryRecursive","polymod/fs/SysFileSystem.hx",132,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_148__readDirectoryRecursive,"polymod.fs.SysFileSystem","_readDirectoryRecursive",0x895744db,"polymod.fs.SysFileSystem._readDirectoryRecursive","polymod/fs/SysFileSystem.hx",148,0xf6781e4f)
namespace polymod{
namespace fs{

void SysFileSystem_obj::__construct(::String modRoot){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_39_new)
HXDLIN(  39)		this->modRoot = modRoot;
            	}

Dynamic SysFileSystem_obj::__CreateEmpty() { return new SysFileSystem_obj; }

void *SysFileSystem_obj::_hx_vtable = 0;

Dynamic SysFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysFileSystem_obj > _hx_result = new SysFileSystem_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SysFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x744a2635;
}

static ::polymod::fs::IFileSystem_obj _hx_polymod_fs_SysFileSystem__hx_polymod_fs_IFileSystem= {
	( bool (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::exists,
	( bool (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::isDirectory,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::readDirectory,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::readDirectoryRecursive,
	( ::String (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getFileContent,
	(  ::haxe::io::Bytes (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getFileBytes,
	( ::Array< ::String > (::hx::Object::*)())&::polymod::fs::SysFileSystem_obj::scanMods,
	(  ::polymod::ModMetadata (::hx::Object::*)(::String))&::polymod::fs::SysFileSystem_obj::getMetadata,
};

void *SysFileSystem_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d05d891: return &_hx_polymod_fs_SysFileSystem__hx_polymod_fs_IFileSystem;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SysFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_44_exists)
HXDLIN(  44)		return ::sys::FileSystem_obj::exists(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,exists,return )

bool SysFileSystem_obj::isDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_48_isDirectory)
HXDLIN(  48)		return ::sys::FileSystem_obj::isDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,isDirectory,return )

::Array< ::String > SysFileSystem_obj::readDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_51_readDirectory)
HXDLIN(  51)		return ::sys::FileSystem_obj::readDirectory(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectory,return )

::String SysFileSystem_obj::getFileContent(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_54_getFileContent)
HXLINE(  55)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  56)			return null();
            		}
HXLINE(  57)		return ::sys::io::File_obj::getContent(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileContent,return )

 ::haxe::io::Bytes SysFileSystem_obj::getFileBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_61_getFileBytes)
HXLINE(  62)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  63)			return null();
            		}
HXLINE(  64)		return ::sys::io::File_obj::getBytes(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileBytes,return )

::Array< ::String > SysFileSystem_obj::scanMods(){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_68_scanMods)
HXLINE(  69)		::Array< ::String > dirs = ::sys::FileSystem_obj::readDirectory(this->modRoot);
HXLINE(  70)		int l = dirs->length;
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			int _g1 = l;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  73)				int j = ((l - i) - 1);
HXLINE(  74)				::String dir = dirs->__get(j);
HXLINE(  75)				::String testDir = ((this->modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE(  76)				bool _hx_tmp;
HXDLIN(  76)				if (::sys::FileSystem_obj::isDirectory(testDir)) {
HXLINE(  76)					_hx_tmp = !(::sys::FileSystem_obj::exists(testDir));
            				}
            				else {
HXLINE(  76)					_hx_tmp = true;
            				}
HXDLIN(  76)				if (_hx_tmp) {
HXLINE(  78)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE(  81)		return dirs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SysFileSystem_obj,scanMods,return )

 ::polymod::ModMetadata SysFileSystem_obj::getMetadata(::String modId){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_85_getMetadata)
HXLINE(  86)		if (::sys::FileSystem_obj::exists(modId)) {
HXLINE(  88)			 ::polymod::ModMetadata meta = null();
HXLINE(  90)			::String metaFile = ::polymod::util::Util_obj::pathJoin(modId,::polymod::PolymodConfig_obj::get_modMetadataFile());
HXLINE(  91)			::String iconFile = ::polymod::util::Util_obj::pathJoin(modId,::polymod::PolymodConfig_obj::get_modIconFile());
HXLINE(  92)			::String packFile = ::polymod::util::Util_obj::pathJoin(modId,::polymod::PolymodConfig_obj::get_modPackFile());
HXLINE(  94)			if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE(  96)				::polymod::Polymod_obj::warning(HX_("missing_meta",7e,15,b8,7b),((HX_("Could not find mod metadata file: \"",a8,ef,82,b2) + metaFile) + HX_("\"",22,00,00,00)),null());
HXLINE(  97)				return null();
            			}
            			else {
HXLINE( 101)				::String metaText;
HXDLIN( 101)				if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE( 101)					metaText = null();
            				}
            				else {
HXLINE( 101)					metaText = ::sys::io::File_obj::getContent(metaFile);
            				}
HXDLIN( 101)				::String metaText1 = metaText;
HXLINE( 102)				meta = ::polymod::ModMetadata_obj::fromJsonStr(metaText1);
HXLINE( 103)				if (::hx::IsNull( meta )) {
HXLINE( 104)					return null();
            				}
            			}
HXLINE( 107)			if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 109)				::polymod::Polymod_obj::warning(HX_("missing_icon",32,b2,11,79),((HX_("Could not find mod icon file: \"",32,09,de,8d) + iconFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 113)				 ::haxe::io::Bytes iconBytes;
HXDLIN( 113)				if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 113)					iconBytes = null();
            				}
            				else {
HXLINE( 113)					iconBytes = ::sys::io::File_obj::getBytes(iconFile);
            				}
HXDLIN( 113)				 ::haxe::io::Bytes iconBytes1 = iconBytes;
HXLINE( 114)				meta->icon = iconBytes1;
            			}
HXLINE( 116)			if (::sys::FileSystem_obj::exists(packFile)) {
HXLINE( 118)				meta->isModPack = true;
HXLINE( 119)				::String packText;
HXDLIN( 119)				if (!(::sys::FileSystem_obj::exists(packFile))) {
HXLINE( 119)					packText = null();
            				}
            				else {
HXLINE( 119)					packText = ::sys::io::File_obj::getContent(packFile);
            				}
HXDLIN( 119)				::String packText1 = packText;
HXLINE( 120)				meta->modPack = ::polymod::Polymod_obj::getModPack(packText1);
            			}
HXLINE( 122)			return meta;
            		}
            		else {
HXLINE( 126)			::polymod::Polymod_obj::error(HX_("missing_mod",29,c6,4d,c8),((HX_("Could not find mod directory: \"",88,65,de,46) + modId) + HX_("\"",22,00,00,00)),null());
            		}
HXLINE( 128)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getMetadata,return )

::Array< ::String > SysFileSystem_obj::readDirectoryRecursive(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_132_readDirectoryRecursive)
HXLINE( 133)		::Array< ::String > all = this->_readDirectoryRecursive(path);
HXLINE( 134)		{
HXLINE( 134)			int _g = 0;
HXDLIN( 134)			int _g1 = all->length;
HXDLIN( 134)			while((_g < _g1)){
HXLINE( 134)				_g = (_g + 1);
HXDLIN( 134)				int i = (_g - 1);
HXLINE( 136)				::String f = all->__get(i);
HXLINE( 137)				int stri = ::polymod::util::Util_obj::uIndexOf(f,(path + HX_("/",2f,00,00,00)),null());
HXLINE( 138)				if ((stri == 0)) {
HXLINE( 140)					int f1 = ::polymod::util::Util_obj::uLength((path + HX_("/",2f,00,00,00)));
HXDLIN( 140)					f = ::polymod::util::Util_obj::uSubstr(f,f1,::polymod::util::Util_obj::uLength(f));
HXLINE( 141)					all[i] = f;
            				}
            			}
            		}
HXLINE( 144)		return all;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectoryRecursive,return )

::Array< ::String > SysFileSystem_obj::_readDirectoryRecursive(::String str){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_148__readDirectoryRecursive)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (::sys::FileSystem_obj::exists(str)) {
HXLINE( 149)			_hx_tmp = ::sys::FileSystem_obj::isDirectory(str);
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 151)			::Array< ::String > all = ::sys::FileSystem_obj::readDirectory(str);
HXLINE( 152)			if (::hx::IsNull( all )) {
HXLINE( 153)				return ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 154)			::Array< ::String > results = ::Array_obj< ::String >::__new(0);
HXLINE( 155)			{
HXLINE( 155)				int _g = 0;
HXDLIN( 155)				while((_g < all->length)){
HXLINE( 155)					::String thing = all->__get(_g);
HXDLIN( 155)					_g = (_g + 1);
HXLINE( 157)					if (::hx::IsNull( thing )) {
HXLINE( 158)						continue;
            					}
HXLINE( 159)					::String pathToThing = ::polymod::util::Util_obj::pathJoin(str,thing);
HXLINE( 160)					if (::sys::FileSystem_obj::isDirectory(pathToThing)) {
HXLINE( 162)						::Array< ::String > subs = this->_readDirectoryRecursive(pathToThing);
HXLINE( 163)						if (::hx::IsNotNull( subs )) {
HXLINE( 165)							results = results->concat(subs);
            						}
            					}
            					else {
HXLINE( 170)						results->push(pathToThing);
            					}
            				}
            			}
HXLINE( 173)			return results;
            		}
HXLINE( 175)		return ::Array_obj< ::String >::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,_readDirectoryRecursive,return )


::hx::ObjectPtr< SysFileSystem_obj > SysFileSystem_obj::__new(::String modRoot) {
	::hx::ObjectPtr< SysFileSystem_obj > __this = new SysFileSystem_obj();
	__this->__construct(modRoot);
	return __this;
}

::hx::ObjectPtr< SysFileSystem_obj > SysFileSystem_obj::__alloc(::hx::Ctx *_hx_ctx,::String modRoot) {
	SysFileSystem_obj *__this = (SysFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SysFileSystem_obj), true, "polymod.fs.SysFileSystem"));
	*(void **)__this = SysFileSystem_obj::_hx_vtable;
	__this->__construct(modRoot);
	return __this;
}

SysFileSystem_obj::SysFileSystem_obj()
{
}

void SysFileSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SysFileSystem);
	HX_MARK_MEMBER_NAME(modRoot,"modRoot");
	HX_MARK_END_CLASS();
}

void SysFileSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(modRoot,"modRoot");
}

::hx::Val SysFileSystem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modRoot") ) { return ::hx::Val( modRoot ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scanMods") ) { return ::hx::Val( scanMods_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { return ::hx::Val( isDirectory_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMetadata") ) { return ::hx::Val( getMetadata_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFileBytes") ) { return ::hx::Val( getFileBytes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readDirectory") ) { return ::hx::Val( readDirectory_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFileContent") ) { return ::hx::Val( getFileContent_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"readDirectoryRecursive") ) { return ::hx::Val( readDirectoryRecursive_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_readDirectoryRecursive") ) { return ::hx::Val( _readDirectoryRecursive_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SysFileSystem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"modRoot") ) { modRoot=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SysFileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("modRoot",04,ba,da,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SysFileSystem_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SysFileSystem_obj,modRoot),HX_("modRoot",04,ba,da,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SysFileSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String SysFileSystem_obj_sMemberFields[] = {
	HX_("modRoot",04,ba,da,e0),
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("readDirectory",37,6c,b3,a3),
	HX_("getFileContent",27,41,50,34),
	HX_("getFileBytes",d9,44,16,cf),
	HX_("scanMods",8e,ff,61,18),
	HX_("getMetadata",25,aa,0d,66),
	HX_("readDirectoryRecursive",3b,60,49,77),
	HX_("_readDirectoryRecursive",da,df,21,0a),
	::String(null()) };

::hx::Class SysFileSystem_obj::__mClass;

void SysFileSystem_obj::__register()
{
	SysFileSystem_obj _hx_dummy;
	SysFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.fs.SysFileSystem",6f,8a,54,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SysFileSystem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SysFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace fs
