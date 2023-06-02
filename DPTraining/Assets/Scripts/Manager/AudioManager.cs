using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;
    public Sound[] musicSounds, sfxSounds, voiceSounds, aidSounds;
    public AudioSource musicSource, sfxSource, voiceSource, aidSource;

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

    public void PlayAid(string name)
    {
        Sound s = System.Array.Find(aidSounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
        aidSource.clip = s.clip;
        // aidSource.loop = true;
        aidSource.Play();
    }

    public void StopAid()
    {
        aidSource.Stop();
    }

    public void ModifyAid(float pitch, float volume = 1.0f)
    {
        aidSource.pitch = pitch;
        aidSource.volume = volume;
    }
}
