using Cosmos.System.Audio.IO;
using IL2CPU.API.Attribs;

namespace vlaicuOS
{
    public static class Media
    {
        public const string Base = "vlaicuOS.Media.";
        [ManifestResourceStream(ResourceName = Base + "start.wav")] public readonly static byte[] startus;

        // System Sounds
        public static MemoryAudioStream start = MemoryAudioStream.FromWave(startus);
    }
}