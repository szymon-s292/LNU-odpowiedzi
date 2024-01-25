// Your code here...
#include <Album.hpp>
#include <Artist.hpp>
#include <RandomUtils.hpp>

Track* pickRandomTrack(const Artist& artst)
{
    Album* a = getRandomElement(artst.albums, artst.numOfAlbums);

    Track* t = getRandomElement(a->tracks, a->numOfTracks);

    return t;
}
