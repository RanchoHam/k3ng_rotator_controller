/* ---------------------- Features and Options - you must configure this !! ------------------------------------------------


  M0UPU Board Features and Options

*/

/* main features */
//#define FEATURE_ELEVATION_CONTROL       // uncomment this for AZ/EL rotators
#define FEATURE_YAESU_EMULATION           // uncomment this for Yaesu GS-232 emulation on control port
//#define FEATURE_EASYCOM_EMULATION         // Easycom protocol emulation on control port (undefine FEATURE_YAESU_EMULATION above)

//#define FEATURE_MOON_TRACKING
//#define FEATURE_SUN_TRACKING
//#define FEATURE_CLOCK
//#define FEATURE_GPS
//#define FEATURE_RTC_DS1307
//#define FEATURE_RTC_PCF8583
//#define FEATURE_ETHERNET
//#define FEATURE_STEPPER_MOTOR    // requires Mega or an AVR with Timer 5 support
//#define FEATURE_AUTOCORRECT

#define LANGUAGE_ENGLISH         // all languages customized in rotator_language.h
//#define LANGUAGE_SPANISH
//#define LANGUAGE_CZECH
//#define LANGUAGE_ITALIAN
//#define LANGUAGE_PORTUGUESE_BRASIL
//#define LANGUAGE_GERMAN  
//#define LANGUAGE_FRENCH
//#define LANGUAGE_DUTCH

/* master and remote slave unit functionality */
//#define FEATURE_REMOTE_UNIT_SLAVE // uncomment this to make this unit a remote unit controlled by a host unit                      

//#define FEATURE_MASTER_WITH_SERIAL_SLAVE       // [master]{remote_port}<-------serial-------->{control_port}[slave]
//#define FEATURE_MASTER_WITH_ETHERNET_SLAVE     // [master]<-------------------ethernet--------------------->[slave]


/* position sensors - pick one for azimuth and one for elevation if using an az/el rotator */
#define FEATURE_AZ_POSITION_POTENTIOMETER   //this is used for both a voltage from a rotator control or a homebrew rotator with a potentiometer
//#define FEATURE_AZ_POSITION_ROTARY_ENCODER
//#define FEATURE_AZ_POSITION_PULSE_INPUT
//#define FEATURE_AZ_POSITION_HMC5883L            // HMC5883L digital compass support
//#define FEATURE_AZ_POSITION_GET_FROM_REMOTE_UNIT  // requires FEATURE_MASTER_WITH_SERIAL_SLAVE or FEATURE_MASTER_WITH_ETHERNET_SLAVE
//#define FEATURE_AZ_POSITION_ADAFRUIT_LSM303              // Uncomment for azimuth using LSM303 compass and Adafruit library (https://github.com/adafruit/Adafruit_LSM303) (also uncomment object declaration below)
//#define FEATURE_AZ_POSITION_POLOLU_LSM303              // Uncomment for azimuth using LSM303 compass and Polulu library
//#define FEATURE_AZ_POSITION_HH12_AS5045_SSI
//#define FEATURE_AZ_POSITION_INCREMENTAL_ENCODER

#define FEATURE_EL_POSITION_POTENTIOMETER
//#define FEATURE_EL_POSITION_ROTARY_ENCODER
//#define FEATURE_EL_POSITION_PULSE_INPUT
//#define FEATURE_EL_POSITION_ADXL345_USING_LOVE_ELECTRON_LIB // Uncomment for elevation ADXL345 accelerometer support using ADXL345 library
//#define FEATURE_EL_POSITION_ADXL345_USING_ADAFRUIT_LIB      // Uncomment for elevation ADXL345 accelerometer support using Adafruit library
//#define FEATURE_EL_POSITION_GET_FROM_REMOTE_UNIT            // requires FEATURE_MASTER_WITH_SERIAL_SLAVE or FEATURE_MASTER_WITH_ETHERNET_SLAVE
//#define FEATURE_EL_POSITION_ADAFRUIT_LSM303                            // Uncomment for elevation using LSM303 accelerometer and Adafruit library (https://github.com/adafruit/Adafruit_LSM303) (also uncomment object declaration below)
//#define FEATURE_EL_POSITION_POLOLU_LSM303              // Uncomment for elevation using LSM303 compass and Polulu library
//#define FEATURE_EL_POSITION_HH12_AS5045_SSI
//#define FEATURE_EL_POSITION_INCREMENTAL_ENCODER
//#define FEATURE_EL_POSITION_MEMSIC_2125

#define FEATURE_4_BIT_LCD_DISPLAY //Uncomment for classic 4 bit LCD display (most common)
//#define FEATURE_ADAFRUIT_I2C_LCD
//#define FEATURE_ADAFRUIT_BUTTONS  // Uncomment this to use Adafruit I2C LCD buttons for manual AZ/EL instead of normal buttons
//#define FEATURE_YOURDUINO_I2C_LCD
//#define FEATURE_RFROBOT_I2C_DISPLAY
//#define FEATURE_ANALOG_OUTPUT_PINS
//#define FEATURE_YWROBOT_I2C_DISPLAY  

//#define FEATURE_SUN_PUSHBUTTON_AZ_EL_CALIBRATION
//#define FEATURE_MOON_PUSHBUTTON_AZ_EL_CALIBRATION

/* preset rotary encoder features and options */
//#define FEATURE_AZ_PRESET_ENCODER            // Uncomment for Rotary Encoder Azimuth Preset support
//#define FEATURE_EL_PRESET_ENCODER            // Uncomment for Rotary Encoder Elevation Preset support (requires FEATURE_AZ_PRESET_ENCODER above)
#define OPTION_ENCODER_HALF_STEP_MODE
#define OPTION_ENCODER_ENABLE_PULLUPS          // define to enable weak pullups on rotary encoder pins
#define OPTION_INCREMENTAL_ENCODER_PULLUPS  // define to enable weak pullups on 3 phase incremental rotary encoder pins
//#define OPTION_PRESET_ENCODER_RELATIVE_CHANGE   // this makes the encoder(s) change the az or el in a relative fashion rather then store an absolute setting
#define OPTION_PRESET_ENCODER_0_360_DEGREES

/* position sensor options */
#define OPTION_AZ_POSITION_ROTARY_ENCODER_HARD_LIMIT // stop azimuth at lower and upper limit rather than rolling over
#define OPTION_EL_POSITION_ROTARY_ENCODER_HARD_LIMIT // stop elevation at lower and upper limits rather than rolling over
#define OPTION_AZ_POSITION_PULSE_HARD_LIMIT  // stop azimuth at lower and upper limit rather than rolling over
#define OPTION_EL_POSITION_PULSE_HARD_LIMIT  // stop elevation at lower and upper limits rather than rolling over
#define OPTION_POSITION_PULSE_INPUT_PULLUPS  // define to enable weak pullups on position pulse inputs

/* less often used features and options */
#define OPTION_GS_232B_EMULATION          // comment this out to default to Yaesu GS-232A emulation when using FEATURE_YAESU_EMULATION above
//#define FEATURE_ROTATION_INDICATOR_PIN     // activate rotation_indication_pin to indicate rotation
//#define FEATURE_LIMIT_SENSE
//#define FEATURE_TIMED_BUFFER           // Support for Yaesu timed buffer commands
//#define OPTION_SERIAL_HELP_TEXT        // Yaesu help command prints help
//#define FEATURE_PARK
//#define OPTION_AZ_MANUAL_ROTATE_LIMITS    // this option will automatically stop the L and R commands when hitting a CCW or CW limit (settings below - AZ_MANUAL_ROTATE_*_LIMIT) 
//#define OPTION_EL_MANUAL_ROTATE_LIMITS
#define OPTION_EASYCOM_AZ_QUERY_COMMAND // Adds non-standard Easycom command: AZ with no parm returns current azimuth
#define OPTION_EASYCOM_EL_QUERY_COMMAND // Adds non-standard Easycom command: EL with no parm returns current elevation
//#define OPTION_C_COMMAND_SENDS_AZ_AND_EL  // uncomment this when using Yaesu emulation with Ham Radio Deluxe
//#define OPTION_DELAY_C_CMD_OUTPUT         // uncomment this when using Yaesu emulation with Ham Radio Deluxe
#define FEATURE_ONE_DECIMAL_PLACE_HEADINGS
//#define FEATURE_TWO_DECIMAL_PLACE_HEADINGS  // under development - not working yet!
//#define FEATURE_AZIMUTH_CORRECTION        // correct the azimuth using a calibration table in rotator_settings.h
//#define FEATURE_ELEVATION_CORRECTION      // correct the elevation using a calibration table in rotator_settings.h
//#define FEATURE_ANCILLARY_PIN_CONTROL     // control I/O pins with serial commands \F, \N, \P
//#define FEATURE_JOYSTICK_CONTROL          // analog joystick support
//#define OPTION_JOYSTICK_REVERSE_X_AXIS
//#define OPTION_JOYSTICK_REVERSE_Y_AXIS
#define OPTION_EL_SPEED_FOLLOWS_AZ_SPEED    // changing the azimith speed with Yaesu X commands or an azimuth speed pot will also change elevation speed
//#define OPTION_PULSE_IGNORE_AMBIGUOUS_PULSES // for azimuth and elevation position pulse input feature, ignore pulses that arrive when no rotation is active
//#define OPTION_BUTTON_RELEASE_NO_SLOWDOWN  // disables slowdown when CW or CCW button is released, or stop button is depressed
#define OPTION_SYNC_RTC_TO_GPS // if both realtime clock and GPS are present, synchronize realtime clock to GPS
//#define OPTION_DISPLAY_HHMM_CLOCK  // display HH:MM clock on LCD row 1 (set position with #define LCD_HHMM_CLOCK_POSITION)
#define OPTION_DISPLAY_HHMMSS_CLOCK  // display HH:MM:SS clock on LCD row 1 (set position with #define LCD_HHMMSS_CLOCK_POSITION)
//#define OPTION_DISPLAY_ALT_HHMM_CLOCK_AND_MAIDENHEAD // display alternating HH:MM clock and maidenhead on LCD row 1 (set position with #define LCD_HHMMCLOCK_POSITION)
//#define OPTION_DISPLAY_CONSTANT_HHMMSS_CLOCK_AND_MAIDENHEAD // display constant HH:MM:SS clock and maidenhead on LCD row 1 (set position with #define LCD_CONSTANT_HHMMSSCLOCK_MAIDENHEAD_POSITION)
//#define OPTION_DISPLAY_BIG_CLOCK   // display date & time clock (set row with #define LCD_BIG_CLOCK_ROW)
//#define OPTION_CLOCK_ALWAYS_HAVE_HOUR_LEADING_ZERO
#define OPTION_DISPLAY_GPS_INDICATOR  // display GPS indicator on LCD - set position with LCD_GPS_INDICATOR_POSITION and LCD_GPS_INDICATOR_ROW
#define OPTION_DISPLAY_MOON_TRACKING_CONTINUOUSLY
//#define OPTION_DISPLAY_DIRECTION_STATUS // N, W, E, S, NW, etc. direction indicator in row 1 center
#define OPTION_DISPLAY_SUN_TRACKING_CONTINUOUSLY
//#define OPTION_DISPLAY_MOON_OR_SUN_TRACKING_CONDITIONAL
//#define OPTION_DISPLAY_VERSION_ON_STARTUP  //code provided by Paolo, IT9IPQ
//#define FEATURE_POWER_SWITCH
//#define OPTION_EXTERNAL_ANALOG_REFERENCE  //Activate external analog voltage reference (needed for RemoteQTH.com unit)
//#define OPTION_SYNC_MASTER_CLOCK_TO_SLAVE        // use when GPS unit is connected to slave unit and you want to synchronize the master unit clock to the slave unit GPS clock
//#define OPTION_SYNC_MASTER_COORDINATES_TO_SLAVE  // use when GPS unit is connected to slave unit and you want to synchronize the master unit coordinates to the slave unit GPS
//#define OPTION_DISABLE_HMC5883L_ERROR_CHECKING
//#define OPTION_HAMLIB_EASYCOM_AZ_EL_COMMAND_HACK
//#define OPTION_HAMLIB_EASYCOM_NO_TERMINATOR_CHARACTER_HACK
//#define OPTION_NO_ELEVATION_CHECK_TARGET_DELAY
//#define OPTION_BLINK_OVERLAP_LED
//#define OPTION_EL_PULSE_DEBOUNCE
//#define OPTION_SCANCON_2RMHF3600_INC_ENCODER  // use with FEATURE_AZ_POSITION_INCREMENTAL_ENCODER and/or FEATURE_EL_POSITION_INCREMENTAL_ENCODER if using the ScanCon 2RMHF3600 incremental encoder
//#define OPTION_RESET_METHOD_JMP_ASM_0
#define OPTION_SAVE_MEMORY_EXCLUDE_REMOTE_CMDS

/* ---------------------- debug stuff - don't touch unless you know what you are doing --------------------------- */



#define DEFAULT_DEBUG_STATE 0 // 1 = activate debug mode at startup; this should be set to zero unless you're debugging something at startup

#define DEBUG_DUMP  // normally compile with this activated unless you're really trying to save memory
// #define DEBUG_MEMORY
// #define DEBUG_BUTTONS
// #define DEBUG_SERIAL
// #define DEBUG_SERVICE_REQUEST_QUEUE
// #define DEBUG_EEPROM
// #define DEBUG_AZ_SPEED_POT
// #define DEBUG_AZ_PRESET_POT
// #define DEBUG_PRESET_ENCODERS
// #define DEBUG_AZ_MANUAL_ROTATE_LIMITS
// #define DEBUG_EL_MANUAL_ROTATE_LIMITS
// #define DEBUG_BRAKE
// #define DEBUG_OVERLAP
// #define DEBUG_DISPLAY
// #define DEBUG_AZ_CHECK_OPERATION_TIMEOUT
// #define DEBUG_TIMED_BUFFER
// #define DEBUG_EL_CHECK_OPERATION_TIMEOUT
// #define DEBUG_VARIABLE_OUTPUTS
// #define DEBUG_ROTATOR
// #define DEBUG_SUBMIT_REQUEST
// #define DEBUG_SERVICE_ROTATION
// #define DEBUG_POSITION_ROTARY_ENCODER
// #define DEBUG_PROFILE_LOOP_TIME
// #define DEBUG_POSITION_PULSE_INPUT
// #define DEBUG_ACCEL
// #define DEBUG_SVC_REMOTE_COMM_INCOMING_BUFFER
// #define DEBUG_SVC_REMOTE_COMM_INCOMING_BUFFER_BAD_DATA
// #define DEBUG_HEADING_READING_TIME
// #define DEBUG_JOYSTICK
// #define DEBUG_ROTATION_INDICATION_PIN
// #define DEBUG_HH12
// #define DEBUG_PARK
// #define DEBUG_LIMIT_SENSE
// #define DEBUG_AZ_POSITION_INCREMENTAL_ENCODER
// #define DEBUG_EL_POSITION_INCREMENTAL_ENCODER
// #define DEBUG_MOON_TRACKING
// #define DEBUG_SUN_TRACKING
// #define DEBUG_GPS
// #define DEBUG_GPS_SERIAL
// #define DEBUG_OFFSET
// #define DEBUG_RTC
// #define DEBUG_PROCESS_YAESU
// #define DEBUG_ETHERNET
// #define DEBUG_PROCESS_SLAVE
// #define DEBUG_MEMSIC_2125
// #define DEBUG_SYNC_MASTER_CLOCK_TO_SLAVE
// #define DEBUG_SYNC_MASTER_COORDINATES_TO_SLAVE
// #define DEBUG_HMC5883L
// #define DEBUG_POLOLU_LSM303_CALIBRATION
// #define DEBUG_STEPPER
// #define DEBUG_AUTOCORRECT






