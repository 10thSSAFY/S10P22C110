
"use strict";

let ObjectStatus = require('./ObjectStatus.js');
let VehicleSpec = require('./VehicleSpec.js');
let ScenarioLoad = require('./ScenarioLoad.js');
let EgoVehicleStatusExtended = require('./EgoVehicleStatusExtended.js');
let MoraiSrvResponse = require('./MoraiSrvResponse.js');
let PRCtrlCmd = require('./PRCtrlCmd.js');
let IntersectionStatus = require('./IntersectionStatus.js');
let WoowaDillyStatus = require('./WoowaDillyStatus.js');
let RadarDetections = require('./RadarDetections.js');
let IntersectionControl = require('./IntersectionControl.js');
let SkateboardCtrlCmd = require('./SkateboardCtrlCmd.js');
let Lamps = require('./Lamps.js');
let FaultStatusInfo = require('./FaultStatusInfo.js');
let SaveSensorData = require('./SaveSensorData.js');
let MultiEgoSetting = require('./MultiEgoSetting.js');
let VehicleCollisionData = require('./VehicleCollisionData.js');
let MoraiTLIndex = require('./MoraiTLIndex.js');
let SyncModeRemoveObject = require('./SyncModeRemoveObject.js');
let EgoDdVehicleStatus = require('./EgoDdVehicleStatus.js');
let ReplayInfo = require('./ReplayInfo.js');
let GhostMessage = require('./GhostMessage.js');
let SyncModeInfo = require('./SyncModeInfo.js');
let EgoVehicleStatus = require('./EgoVehicleStatus.js');
let SyncModeAddObject = require('./SyncModeAddObject.js');
let FaultStatusInfo_Vehicle = require('./FaultStatusInfo_Vehicle.js');
let SyncModeCmdResponse = require('./SyncModeCmdResponse.js');
let IntscnTL = require('./IntscnTL.js');
let MultiPlayEventResponse = require('./MultiPlayEventResponse.js');
let DillyCmd = require('./DillyCmd.js');
let SyncModeCtrlCmd = require('./SyncModeCtrlCmd.js');
let CollisionData = require('./CollisionData.js');
let GPSMessage = require('./GPSMessage.js');
let FaultStatusInfo_Sensor = require('./FaultStatusInfo_Sensor.js');
let PREvent = require('./PREvent.js');
let SetTrafficLight = require('./SetTrafficLight.js');
let MoraiSimProcStatus = require('./MoraiSimProcStatus.js');
let TrafficLight = require('./TrafficLight.js');
let SensorPosControl = require('./SensorPosControl.js');
let MapSpecIndex = require('./MapSpecIndex.js');
let EventInfo = require('./EventInfo.js');
let NpcGhostInfo = require('./NpcGhostInfo.js');
let SVADC = require('./SVADC.js');
let ObjectStatusExtended = require('./ObjectStatusExtended.js');
let FaultInjection_Tire = require('./FaultInjection_Tire.js');
let SkidSteer6wUGVCtrlCmd = require('./SkidSteer6wUGVCtrlCmd.js');
let FaultStatusInfo_Overall = require('./FaultStatusInfo_Overall.js');
let NpcGhostCmd = require('./NpcGhostCmd.js');
let SkateboardStatus = require('./SkateboardStatus.js');
let MoraiTLInfo = require('./MoraiTLInfo.js');
let VehicleCollision = require('./VehicleCollision.js');
let SyncModeSetGear = require('./SyncModeSetGear.js');
let ObjectStatusListExtended = require('./ObjectStatusListExtended.js');
let WaitForTick = require('./WaitForTick.js');
let ObjectStatusList = require('./ObjectStatusList.js');
let FaultInjection_Controller = require('./FaultInjection_Controller.js');
let SkidSteer6wUGVStatus = require('./SkidSteer6wUGVStatus.js');
let FaultInjection_Response = require('./FaultInjection_Response.js');
let FaultInjection_Sensor = require('./FaultInjection_Sensor.js');
let GetTrafficLightStatus = require('./GetTrafficLightStatus.js');
let VehicleSpecIndex = require('./VehicleSpecIndex.js');
let MoraiSimProcHandle = require('./MoraiSimProcHandle.js');
let SyncModeScenarioLoad = require('./SyncModeScenarioLoad.js');
let CtrlCmd = require('./CtrlCmd.js');
let PRStatus = require('./PRStatus.js');
let MultiPlayEventRequest = require('./MultiPlayEventRequest.js');
let MapSpec = require('./MapSpec.js');
let ERP42Info = require('./ERP42Info.js');
let WaitForTickResponse = require('./WaitForTickResponse.js');
let DdCtrlCmd = require('./DdCtrlCmd.js');
let DillyCmdResponse = require('./DillyCmdResponse.js');
let SyncModeResultResponse = require('./SyncModeResultResponse.js');
let RadarDetection = require('./RadarDetection.js');
let SyncModeCmd = require('./SyncModeCmd.js');

module.exports = {
  ObjectStatus: ObjectStatus,
  VehicleSpec: VehicleSpec,
  ScenarioLoad: ScenarioLoad,
  EgoVehicleStatusExtended: EgoVehicleStatusExtended,
  MoraiSrvResponse: MoraiSrvResponse,
  PRCtrlCmd: PRCtrlCmd,
  IntersectionStatus: IntersectionStatus,
  WoowaDillyStatus: WoowaDillyStatus,
  RadarDetections: RadarDetections,
  IntersectionControl: IntersectionControl,
  SkateboardCtrlCmd: SkateboardCtrlCmd,
  Lamps: Lamps,
  FaultStatusInfo: FaultStatusInfo,
  SaveSensorData: SaveSensorData,
  MultiEgoSetting: MultiEgoSetting,
  VehicleCollisionData: VehicleCollisionData,
  MoraiTLIndex: MoraiTLIndex,
  SyncModeRemoveObject: SyncModeRemoveObject,
  EgoDdVehicleStatus: EgoDdVehicleStatus,
  ReplayInfo: ReplayInfo,
  GhostMessage: GhostMessage,
  SyncModeInfo: SyncModeInfo,
  EgoVehicleStatus: EgoVehicleStatus,
  SyncModeAddObject: SyncModeAddObject,
  FaultStatusInfo_Vehicle: FaultStatusInfo_Vehicle,
  SyncModeCmdResponse: SyncModeCmdResponse,
  IntscnTL: IntscnTL,
  MultiPlayEventResponse: MultiPlayEventResponse,
  DillyCmd: DillyCmd,
  SyncModeCtrlCmd: SyncModeCtrlCmd,
  CollisionData: CollisionData,
  GPSMessage: GPSMessage,
  FaultStatusInfo_Sensor: FaultStatusInfo_Sensor,
  PREvent: PREvent,
  SetTrafficLight: SetTrafficLight,
  MoraiSimProcStatus: MoraiSimProcStatus,
  TrafficLight: TrafficLight,
  SensorPosControl: SensorPosControl,
  MapSpecIndex: MapSpecIndex,
  EventInfo: EventInfo,
  NpcGhostInfo: NpcGhostInfo,
  SVADC: SVADC,
  ObjectStatusExtended: ObjectStatusExtended,
  FaultInjection_Tire: FaultInjection_Tire,
  SkidSteer6wUGVCtrlCmd: SkidSteer6wUGVCtrlCmd,
  FaultStatusInfo_Overall: FaultStatusInfo_Overall,
  NpcGhostCmd: NpcGhostCmd,
  SkateboardStatus: SkateboardStatus,
  MoraiTLInfo: MoraiTLInfo,
  VehicleCollision: VehicleCollision,
  SyncModeSetGear: SyncModeSetGear,
  ObjectStatusListExtended: ObjectStatusListExtended,
  WaitForTick: WaitForTick,
  ObjectStatusList: ObjectStatusList,
  FaultInjection_Controller: FaultInjection_Controller,
  SkidSteer6wUGVStatus: SkidSteer6wUGVStatus,
  FaultInjection_Response: FaultInjection_Response,
  FaultInjection_Sensor: FaultInjection_Sensor,
  GetTrafficLightStatus: GetTrafficLightStatus,
  VehicleSpecIndex: VehicleSpecIndex,
  MoraiSimProcHandle: MoraiSimProcHandle,
  SyncModeScenarioLoad: SyncModeScenarioLoad,
  CtrlCmd: CtrlCmd,
  PRStatus: PRStatus,
  MultiPlayEventRequest: MultiPlayEventRequest,
  MapSpec: MapSpec,
  ERP42Info: ERP42Info,
  WaitForTickResponse: WaitForTickResponse,
  DdCtrlCmd: DdCtrlCmd,
  DillyCmdResponse: DillyCmdResponse,
  SyncModeResultResponse: SyncModeResultResponse,
  RadarDetection: RadarDetection,
  SyncModeCmd: SyncModeCmd,
};
