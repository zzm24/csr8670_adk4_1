/****************************************************************************
Copyright (c) 2010 - 2015 Qualcomm Technologies International, Ltd.

FILE NAME
    display_plugin_if.h
    
DESCRIPTION
  
*/

/*!
@file   display_plugin_if.h
@brief  Header file for the display plugin interface.

    The parameters / enums here define the message interface used for the 
    display plugin.
    i.e This defines the interface between the display library and the underlying plugin 
    
    The contents of these are similar to the parameters passed into the 
    display library itself
    
    These messages are generated by the display library and received in the message handler
    associate with the constant task of an display plugin.
    
    The company_name_display_plugin.c / h files contain the meessage handler which 
    receives these messages.    
    
    The plugin itself is responsible for acting upon these messages.
     
*/


#ifndef _DISPLAY_PLUGIN_INTERFACE_H_
#define _DISPLAY_PLUGIN_INTERFACE_H_

#include <library.h>
#include <panic.h>
#include <message.h>

/*the text scroll type*/
typedef enum DisplayTextScroll
{
    DISPLAY_TEXT_SCROLL_STATIC,
    DISPLAY_TEXT_SCROLL_SCROLL,
    DISPLAY_TEXT_SCROLL_BOUNCE
}DISPLAY_TEXT_SCROLL_T;

/*the display icon type*/
typedef enum DisplayIcon
{
    DISPLAY_ICON_CALL,
    DISPLAY_ICON_PLAY,
    DISPLAY_ICON_PAUSE
}DISPLAY_ICON_T;


/* Macros for creating messages */
#define MAKE_DISPLAY_MESSAGE(TYPE) TYPE##_T *message = PanicUnlessNew(TYPE##_T);
#define MAKE_DISPLAY_MESSAGE_WITH_LEN(TYPE, LEN) TYPE##_T *message = (TYPE##_T *) PanicUnlessMalloc(sizeof(TYPE##_T) + LEN);

/*!  Display Plugin Downstream Interface Messages

  These messages are sent to the display plugin modules.
 
   A display plugin must handle all of the messages below.
    
*/
typedef enum display_plugin_interface_message_type_tag
{
   DISPLAY_PLUGIN_INIT_MSG    = DISPLAY_DOWNSTREAM_MESSAGE_BASE,
  DISPLAY_PLUGIN_SET_STATE_MSG ,
 DISPLAY_PLUGIN_SET_TEXT_MSG,
   DISPLAY_PLUGIN_SET_BATTERY_MSG,
    DISPLAY_PLUGIN_SET_VOLUME_MSG,
 DISPLAY_PLUGIN_SET_ICON_MSG,
    
  DISPLAY_DOWNSTREAM_MESSAGE_TOP  
   
} display_plugin_interface_message_type_t ; 

/*!  Display Plugin Upstream Interface Messages

    These messages are sent from the display plugin modules.
   
   A display plugin must handle all of the messages below.
    
*/
typedef enum display_plugin_upstream_message_type_tag 
{
   DISPLAY_PLUGIN_INIT_IND    = DISPLAY_UPSTREAM_MESSAGE_BASE,
    
   DISPLAY_UPSTREAM_MESSAGE_TOP    
   
} display_plugin_upstream_message_type_t ; 

/*!
  @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should initialise the display driver with the defined values
*/
typedef struct 
{ 
       /*! The application task to route upstream plugin messages to */
    Task            app_task ;
        /*! Word to hold the length of the longest line on the display */
  uint16          *max_length;
   
} DISPLAY_PLUGIN_INIT_MSG_T ;

/*!
    @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should update the display to the required state
*/
typedef struct 
{
         /*! The display status (on/off) */
    bool          state ;
}DISPLAY_PLUGIN_SET_STATE_MSG_T ;

/*!
    @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should update the display to show the current text
   with the selected options (if supported by the display)
*/
typedef struct 
{
       /*! The line on the display to update */
    unsigned        line:4 ;
      /*! scroll, bounce or static text */
   unsigned        scroll:2;
      /*! Flash text */
  unsigned        flash_enable:1;
            
   unsigned        unused:1;
      /*! amount of delay in ms before the text will start to move */        
   uint16          scroll_pause;
      /*! amount of time in ms before the display scroll updates */
  uint16          scroll_update;
     /*! amount of time in seconds the text will be displayed, 0 is infinity until changed */
   uint16          display_time;
  
       /*!length of the text to display*/
 uint8           text_length;
       /*! text to display */
 char            text[1];
}DISPLAY_PLUGIN_SET_TEXT_MSG_T ;

/*!
 @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should update the display to show the current volume
*/
typedef struct 
{
        /*! The volume at which to set on the display */
    uint16          volume ;
}DISPLAY_PLUGIN_SET_VOLUME_MSG_T ;

/*!
  @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should update the display to show the selected icon
  in the required state
*/
typedef struct 
{
         /*! The required display icon */
    uint8          icon ;
         /*! The required  icon state */
    bool           state ;  
}DISPLAY_PLUGIN_SET_ICON_MSG_T ;

/*!
 @brief This message is generated by the display manager and is issued
  to a display plugin module. 
   The plugin module should update the display to show the current battery level
*/
typedef struct 
{
         /*! The battery level which to set on the display */
    uint16          battery_level ;
}DISPLAY_PLUGIN_SET_BATTERY_MSG_T ;

/*!
  @brief This message is generated by an display plugin module and sent to the application Task
  to indicate initialisation of the display
*/
typedef struct 
{
 bool        result  ;
}DISPLAY_PLUGIN_INIT_IND_T ;

#endif /* _DISPLAY_PLUGIN_INTERFACE_H_ */
