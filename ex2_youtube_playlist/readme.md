# YouTube PlayList

In deze oefening dien je een aantal methoden te implementeren zodat de applicatie operationeel wordt. De app laat toe een YouTube playlist bij te houden en hierin te zoeken op keywords.

De applicatie is volledig compileerbaar in zijn startende staat. Dit betekent dat je stap per stap kan toevoegen en indien je geen fouten maakt het steeds zou moeten compileren. Werk gradueel.

De functionaliteit die je dient toe te voegen is de volgende:
* `add()` methode van de class `PlayList`: deze methode dient een Video toe te voegen aan de reeds bestaande lijst van videos.
* `to_string()` methode van de class `Video`: de methode moet een textuele voorstelling maken van een video.
* `search()` methode van de class `PlayList`: deze methode laat toe te zoeken naar videos met een bepaald kernwoord in een PlayList.

De toe te voegen methoden worden hieronder nader toegelicht.

## add van PlayList

De `add()` methode van PlayList moet een video toevoegen aan de lijst van videos in PlayList.

## to_string van Video

De `to_string()` methode van de class `Video` dient een `std::string` terug te geven volgens volgend formaat:

```text
title by author (duration_minutes:duration_seconds) [likes likes]
```

Voorbeeld:

```text
For Whom The Bell Tolls by Metallica [30617 likes] (5:13)
```

Merk op dat de `duration` van een `Video` intern is opgeslagen in seconden. Je dient dus zelf het aantal minuten en seconden te bepalen hieruit.

## search van PlayList

De `search()` methode van PlayList dient de volledige PlayList te doorzoeken op video die `keyword` in hun `title` of `author` staan hebben. Alle hits dien je dan toe te voegen aan `searchResults` en te returnen. Door opnieuw een PlayList object te returnen kunnen we heel makkelijk de `to_string()` functionaliteit van PlayList hergebruiken om de gevonden resultaten naar het scherm te printen.

Er zit hier wel een addertje onder het gras. De zoekmethode van een `string` is case-sensitive. Dit betekent dat als je hier geen rekening mee houdt `search("Metal")` en `search("metal")` andere resultaten zal geven. Dit is niet logisch. Daarom dien je in zoekopdracht gebruik te maken van de `StringHelper` class. Deze heeft een statische (static) methode die toelaat een `string` om te zetten naar een lowercase variant.

## De verwachte output

De applicatie zou volgende output moeten genereren

```text
YouTube PlayList Application

Playlist Heavy Metal
------------------

Toxicity by System of a Down [632 likes] (3:43)
For Whom The Bell Tolls by Metallica [30617 likes] (5:13)
The Memory Remains by Metallica [28485 likes] (4:38)
Links 2 3 4 by Rammstein [23816 likes] (3:36)
Bodies by Drowning Pool [18331 likes] (3:39)
Kings of Metal by Manowar [5566 likes] (3:44)
Dragula by Rob Zombie [17775 likes] (3:48)
Tribute by Tenacious D [23809 likes] (4:53)
Hail to the King Ragnar by Avenged Sevenfold [903 likes] (5:3)

Give a keyword to search for in playlist: king

Search results:
Playlist containing "king"
------------------------

Kings of Metal by Manowar [5566 likes] (3:44)
Hail to the King Ragnar by Avenged Sevenfold [903 likes] (5:3)
```

## Remarks

<!-- Hier kan je opmerkingen plaatsen. -->