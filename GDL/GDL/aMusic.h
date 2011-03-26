#ifndef AMUSIC_H_INCLUDED
#define AMUSIC_H_INCLUDED

class RuntimeScene;
class ObjectsConcerned;
class Instruction;

bool ActPlaySound( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActPlaySoundCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActStopSoundCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActPauseSoundCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActRePlaySoundCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );

bool ActPlayMusic( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActPlayMusicCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActStopMusicCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActPauseMusicCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActRePlayMusicCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );

bool ActModVolumeSoundCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActModVolumeMusicCanal( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActModGlobalVolume( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );

bool ActModPitchSoundChannel( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActModPitchMusicChannel( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );

bool ActModPlayingOffsetSoundChannel( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );
bool ActModPlayingOffsetMusicChannel( RuntimeScene & scene, ObjectsConcerned & objectsConcerned, const Instruction & action );

#endif // AMUSIC_H_INCLUDED
