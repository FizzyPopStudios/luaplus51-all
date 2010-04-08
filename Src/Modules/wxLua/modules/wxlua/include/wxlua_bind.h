// ---------------------------------------------------------------------------
// wxlua.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxlua_H__
#define __HOOK_WXLUA_wxlua_H__


#include "wxlua/include/wxlstate.h"
#include "wxlua/include/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/include/wxldefs.h'
#if WXLUA_BINDING_VERSION > 30
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 30
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_WXLUA wxLuaBinding_wxlua : public wxLuaBinding
{
public:
    wxLuaBinding_wxlua();

    virtual bool RegisterBinding(const wxLuaState& wxlState);

private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxlua)
};


// initialize wxLuaBinding_wxlua for all wxLuaStates
extern WXDLLIMPEXP_WXLUA wxLuaBinding* wxLuaBinding_wxlua_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#include "wxlua/include/wxlstate.h"

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

extern WXDLLIMPEXP_DATA_WXLUA(int) wxluatype_wxLuaObject;
extern WXDLLIMPEXP_DATA_WXLUA(int) wxluatype_wxLuaState;



#endif // __HOOK_WXLUA_wxlua_H__

