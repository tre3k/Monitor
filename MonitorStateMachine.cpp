/*----- PROTECTED REGION ID(MonitorStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        MonitorStateMachine.cpp
//
// description : State machine file for the Monitor class
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
// Kirill Pshenichnyi (c) 2019
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <Monitor.h>

/*----- PROTECTED REGION END -----*/	//	Monitor::MonitorStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace Monitor_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_Count_allowed()
 *	Description : Execution allowed for Count attribute
 */
//--------------------------------------------------------
bool Monitor::is_Count_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for Count attribute in read access.
	/*----- PROTECTED REGION ID(Monitor::CountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::CountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_TimeInterval_allowed()
 *	Description : Execution allowed for TimeInterval attribute
 */
//--------------------------------------------------------
bool Monitor::is_TimeInterval_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for TimeInterval attribute in Write access.
	/*----- PROTECTED REGION ID(Monitor::TimeIntervalStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::TimeIntervalStateAllowed_WRITE

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_Complete_allowed()
 *	Description : Execution allowed for Complete attribute
 */
//--------------------------------------------------------
bool Monitor::is_Complete_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for Complete attribute in read access.
	/*----- PROTECTED REGION ID(Monitor::CompleteStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::CompleteStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_StartCount_allowed()
 *	Description : Execution allowed for StartCount attribute
 */
//--------------------------------------------------------
bool Monitor::is_StartCount_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for StartCount command.
	/*----- PROTECTED REGION ID(Monitor::StartCountStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::StartCountStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_StopCount_allowed()
 *	Description : Execution allowed for StopCount attribute
 */
//--------------------------------------------------------
bool Monitor::is_StopCount_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for StopCount command.
	/*----- PROTECTED REGION ID(Monitor::StopCountStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::StopCountStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Monitor::is_ResetCounter_allowed()
 *	Description : Execution allowed for ResetCounter attribute
 */
//--------------------------------------------------------
bool Monitor::is_ResetCounter_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetCounter command.
	/*----- PROTECTED REGION ID(Monitor::ResetCounterStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Monitor::ResetCounterStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Monitor::MonitorStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Monitor::MonitorStateAllowed.AdditionalMethods

}	//	End of namespace
