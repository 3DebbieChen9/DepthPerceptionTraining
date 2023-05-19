using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;
    public Sound[] musicSounds, sfxSounds, voiceSounds;
    public AudioSource musicSource, sfxSource, voiceSource;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public void PlayMusic(string name)
    {
        Sound s = System.Array.Find(musicSounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
        musicSource.clip = s.clip;
        // musicSource.volume = s.volume;
        // musicSource.pitch = s.pitch;
        // musicSource.loop = s.loop;
        musicSource.Play();
    }

    public void PlaySFX(string name)
    {
        Sound s = System.Array.Find(sfxSounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
        sfxSource.clip = s.clip;
        // sfxSource.volume = s.volume;
        // sfxSource.pitch = s.pitch;
        // sfxSource.loop = s.loop;
        sfxSource.Play();
    }

    public void PlayVoiceComment(string name)
    {
        Sound s = System.Array.Find(voiceSounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
        voiceSource.clip = s.clip;
        // voiceSource.volume = s.volume;
        // voiceSource.pitch = s.pitch;
        // voiceSource.loop = s.loop;
        voiceSource.Play();
    }
}
