bool	vehicleJumper ( int iVehicleID );

void	cheat_vehicle_teleport ( struct vehicle_info *info, const float pos[3], int interior_id );
void	cheat_handle_vehicle_unflip ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_air_brake ( struct vehicle_info *info, double time_diff );
//void	cheat_handle_vehicle_slowTeleport ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_warp ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_nitro ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_stick ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_quick_turn ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_protection ( struct vehicle_info *info, float time_diff );
void	cheat_handle_vehicle_brake ( struct vehicle_info *info, double time_diff );
void	cheat_handle_vehicle_hop ( struct vehicle_info *info, float time_diff );
void	cheat_vehicle_air_brake_set ( int enabled );
void	cheat_handle_vehicle_engine ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_brakedance ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_blinking_carlights ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_fly ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_keepTrailer ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_fast_exit ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_repair_car ( struct vehicle_info *vehicle_info, float time_diff );
void	cheat_handle_vehicle_spiderWheels ( vehicle_info *vinfo, float time_diff );
void	CPhysical_ApplyGravity ( DWORD dwThis );
CVector cheat_vehicle_getPositionUnder ( CVehicle *cveh );