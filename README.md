# LiquidXGame

//
Mechanics:

Double jump: Press space in air to jump second time.

Dash: Press shift to dash forward, Has a small cool down

//
Game Objective:
Get to the end without falling off the map or geting hit 
by the obsticles


//
GameMechanics Framework:
* Using composition to keep the mechanics modular
* Functions and variables exposed to BP for designers to control


//
Programming Documentation:

//
Mechanic Dash: Exists in ParkourMovementComponent.h

//
Functions:

void Dash(class UNiagaraComponent* NiagaraComp);
* Perform forward dash if bCanDash is true
* Uses NiagraComp to activate particle effect
* Turns bdashing variable to true

void ResetDash();
* Resets bCanDash for player to dash again
* Automatically callsed after dash cooldown period


//
Variables:

float DashSpeed - Velocity of dash

float DashDuration - Duration of dash

float DashCooldown - Cooldown for dash reset

float DashCameraLag - camera lag behind player char (Lower is more lag)




//
Mechanic Double Jump: Exists in ParkourMovementComponent.h

//
Functions:
	
void AirJump();
* Performs another jump if player is in air
* Uses AirJumpImpulse Var to launch character 
	
	
void AirJumpReset();
* Allows air jump to be performed again
* Automatically called once player lands



//
Variables:

float InAirCameraLag - Camera lag when player enters in air state (Lower value is higher lag)

float GroundedCameraLag - Camera lag when player is grounded (Lower value is higher lag)

FVector AirJumpImpulse - Second jump strength and direction (Use only z value for a normal jump use case)

bool bAirJumpVelocityOverride - Should second jump overried current velocity or add to it


//
ParkourMovementComponent Dependencies 
* CharacterMovmentComponent - Must contain this component or a decendent
* Character Actor - Parent actor has to be a character or decendent
* SpringArmComponent - Optinal
* Niagra Component - Optinal for VFX

 
