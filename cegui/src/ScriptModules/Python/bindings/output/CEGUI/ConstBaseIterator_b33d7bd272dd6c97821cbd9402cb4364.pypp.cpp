// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364.pypp.hpp"

namespace bp = boost::python;

struct ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater__comma__std_scope_pair_less__CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr___greater___greater__wrapper : CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >, bp::wrapper< CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > > {

    ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater__comma__std_scope_pair_less__CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr___greater___greater__wrapper( )
    : CEGUI::ConstBaseIterator<std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> >( )
      , bp::wrapper< CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > >(){
        // null constructor
    
    }

    virtual ::std::pair< CEGUI::Image*, CEGUI::ImageFactory* > getCurrentValue(  ) const {
        bp::override func_getCurrentValue = this->get_override( "getCurrentValue" );
        return func_getCurrentValue(  );
    }

};

void register_ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_class(){

    { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >
        typedef bp::class_< ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater__comma__std_scope_pair_less__CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr___greater___greater__wrapper, boost::noncopyable > ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer_t;
        ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer_t ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer = ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer_t( "ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364", bp::no_init );
        bp::scope ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_scope( ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer );
        ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n") );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::getCurrentValue
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef ::std::pair<CEGUI::Image*, CEGUI::ImageFactory*> ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "getCurrentValue"
                , bp::pure_virtual( getCurrentValue_function_type(&::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::getCurrentValue) )
                , "*!\n\
            \n\
               Return the value for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::isAtEnd
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef bool ( exported_class_t::*isAtEnd_function_type )(  ) const;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "isAtEnd"
                , isAtEnd_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::isAtEnd )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the end of the iterators range.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::isAtStart
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef bool ( exported_class_t::*isAtStart_function_type )(  ) const;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "isAtStart"
                , isAtStart_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::isAtStart )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the start of the iterators range.\n\
            *\n" );
        
        }
        ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( bp::self != bp::self );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::operator=
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef ::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > & ( exported_class_t::*assign_function_type )( ::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > const & ) ;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >()
                , "*!\n\
            \n\
               ConstBaseIterator assignment operator\n\
            *\n" );
        
        }
        ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( bp::self == bp::self );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::toEnd
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef void ( exported_class_t::*toEnd_function_type )(  ) ;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "toEnd"
                , toEnd_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::toEnd )
                , "*!\n\
            \n\
               Set the iterator current position to the end position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::toStart
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > exported_class_t;
            typedef void ( exported_class_t::*toStart_function_type )(  ) ;
            
            ConstBaseIterator_b33d7bd272dd6c97821cbd9402cb4364_exposer.def( 
                "toStart"
                , toStart_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > >::toStart )
                , "*!\n\
            \n\
               Set the iterator current position to the start position.\n\
            *\n" );
        
        }
    }

}
