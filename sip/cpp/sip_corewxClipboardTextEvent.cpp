/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 325 "sip/gen/event.sip"
    #include <wx/event.h>
#line 15 "sip_corewxClipboardTextEvent.cpp"

#line 40 "sip/gen/object.sip"
    #include <wx/object.h>
#line 19 "sip_corewxClipboardTextEvent.cpp"
#line 129 "sip/gen/event.sip"
    #include <wx/event.h>
#line 22 "sip_corewxClipboardTextEvent.cpp"
#line 17 "sip/gen/object.sip"
    #include <wx/object.h>
#line 25 "sip_corewxClipboardTextEvent.cpp"
#line 84 "sip/gen/object.sip"
    #include <wx/object.h>
#line 28 "sip_corewxClipboardTextEvent.cpp"


class sipwxClipboardTextEvent : public wxClipboardTextEvent
{
public:
    sipwxClipboardTextEvent(wxEventType,int);
    sipwxClipboardTextEvent(const wxClipboardTextEvent&);
    virtual ~sipwxClipboardTextEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    wxEvent * Clone();
    wxEventCategory GetEventCategory();
    wxClassInfo * GetClassInfo();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxClipboardTextEvent(const sipwxClipboardTextEvent &);
    sipwxClipboardTextEvent &operator = (const sipwxClipboardTextEvent &);

    char sipPyMethods[3];
};

sipwxClipboardTextEvent::sipwxClipboardTextEvent(wxEventType commandType,int id): wxClipboardTextEvent(commandType,id), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxClipboardTextEvent::sipwxClipboardTextEvent(const wxClipboardTextEvent& a0): wxClipboardTextEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxClipboardTextEvent::~sipwxClipboardTextEvent()
{
    sipCommonDtor(sipPySelf);
}

wxEvent * sipwxClipboardTextEvent::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return wxEvent::Clone();

    extern wxEvent * sipVH__core_1(sip_gilstate_t,PyObject *);

    return sipVH__core_1(sipGILState,sipMeth);
}

wxEventCategory sipwxClipboardTextEvent::GetEventCategory()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_GetEventCategory);

    if (!sipMeth)
        return wxEvent::GetEventCategory();

    extern wxEventCategory sipVH__core_0(sip_gilstate_t,PyObject *);

    return sipVH__core_0(sipGILState,sipMeth);
}

wxClassInfo * sipwxClipboardTextEvent::GetClassInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_GetClassInfo);

    if (!sipMeth)
        return wxObject::GetClassInfo();

    extern wxClassInfo * sipVH__core_6(sip_gilstate_t,PyObject *);

    return sipVH__core_6(sipGILState,sipMeth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxClipboardTextEvent(void *, const sipTypeDef *);}
static void *cast_wxClipboardTextEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_wxClipboardTextEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_wxCommandEvent)->ctd_cast((wxCommandEvent *)(wxClipboardTextEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxClipboardTextEvent(void *, int);}
static void release_wxClipboardTextEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxClipboardTextEvent *>(sipCppV);
    else
        delete reinterpret_cast<wxClipboardTextEvent *>(sipCppV);
}


extern "C" {static void dealloc_wxClipboardTextEvent(sipSimpleWrapper *);}
static void dealloc_wxClipboardTextEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipwxClipboardTextEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_wxClipboardTextEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_wxClipboardTextEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxClipboardTextEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxClipboardTextEvent *sipCpp = 0;

    {
        wxEventType commandType = wxEVT_NULL;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &id))
        {
            try
            {
            sipCpp = new sipwxClipboardTextEvent(commandType,id);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const wxClipboardTextEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxClipboardTextEvent, &a0))
        {
            try
            {
            sipCpp = new sipwxClipboardTextEvent(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxClipboardTextEvent[] = {{9, 255, 1}};

PyDoc_STRVAR(doc_wxClipboardTextEvent, "\1ClipboardTextEvent(int commandType=wxEVT_NULL, int id=0)\n"
    "ClipboardTextEvent(ClipboardTextEvent)");


sipClassTypeDef sipTypeDef__core_wxClipboardTextEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxClipboardTextEvent,
        {0}
    },
    {
        sipNameNr_ClipboardTextEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxClipboardTextEvent,
    -1,
    -1,
    supers_wxClipboardTextEvent,
    0,
    init_wxClipboardTextEvent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_wxClipboardTextEvent,
    0,
    0,
    0,
    release_wxClipboardTextEvent,
    cast_wxClipboardTextEvent,
    0,
    0,
    0
};