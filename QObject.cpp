#include "phpqtng.h"
// #define QtParentClass QWidget
#define QtClass QObject

#define ME QNAME(QtClass)

void ME::__construct(Php::Parameters &params)
{   
    if (params.size()==1 and params[0].type()==Php::Type::Object)
        q=new QObject(PARAM_QOBJECT(params[0]));
    else
        q=new QObject();

}
Php::Value ME::__get(const Php::Value &name)
{

    return Php::Base::__get(name);
}
void ME::__set(const Php::Value &name, const Php::Value &value)
{
    
    Php::Base::__set(name,value);
}
Php::Value ME::__call(const char *_name, Php::Parameters &params)
{
    return PhpQtNgBase::__call(_name,params);
}
Php::Value ME::__callStatic(const char *_name, Php::Parameters &params)
{
    // for (auto &param : params)
    // {
    //     // append parameter string value to return value
    //     retval += " " + param.stringValue();
    // }

    return nullptr;
}

