// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_VIV_shader_binary
#include <lime/graphics/opengl/ext/VIV_shader_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4bc70f1cf8ced427_6_new,"lime.graphics.opengl.ext.VIV_shader_binary","new",0xccc744ef,"lime.graphics.opengl.ext.VIV_shader_binary.new","lime/graphics/opengl/ext/VIV_shader_binary.hx",6,0xb3f93303)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void VIV_shader_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4bc70f1cf8ced427_6_new)
HXDLIN(   6)		this->SHADER_BINARY_VIV = 36804;
            	}

Dynamic VIV_shader_binary_obj::__CreateEmpty() { return new VIV_shader_binary_obj; }

void *VIV_shader_binary_obj::_hx_vtable = 0;

Dynamic VIV_shader_binary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VIV_shader_binary_obj > _hx_result = new VIV_shader_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VIV_shader_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03df1959;
}


VIV_shader_binary_obj::VIV_shader_binary_obj()
{
}

::hx::Val VIV_shader_binary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_VIV") ) { return ::hx::Val( SHADER_BINARY_VIV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VIV_shader_binary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_VIV") ) { SHADER_BINARY_VIV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VIV_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("SHADER_BINARY_VIV",5f,dd,98,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VIV_shader_binary_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VIV_shader_binary_obj,SHADER_BINARY_VIV),HX_("SHADER_BINARY_VIV",5f,dd,98,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VIV_shader_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String VIV_shader_binary_obj_sMemberFields[] = {
	HX_("SHADER_BINARY_VIV",5f,dd,98,b0),
	::String(null()) };

::hx::Class VIV_shader_binary_obj::__mClass;

void VIV_shader_binary_obj::__register()
{
	VIV_shader_binary_obj _hx_dummy;
	VIV_shader_binary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.VIV_shader_binary",7d,a1,90,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VIV_shader_binary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VIV_shader_binary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VIV_shader_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VIV_shader_binary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
