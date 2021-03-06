/***************************************************************************
 *            platform.cpp
 *
 *  Sat Dec 23 10:00:00 CEST 2017
 *  Copyright 2017 Lars Muldjord
 *  muldjordlars@gmail.com
 ****************************************************************************/
/*
 *  This file is part of skyscraper.
 *
 *  skyscraper is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  skyscraper is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with skyscraper; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 */

#include <iostream>
#include <QFile>
#include <QProcess>
#include <QDir>

#include "platform.h"

Platform::Platform()
{
}

Platform::~Platform()
{
}

QStringList Platform::getPlatforms()
{
  QStringList platforms;
  platforms.append("amiga");
  platforms.append("apple2");
  platforms.append("arcade");
  platforms.append("atari2600");
  platforms.append("atari5200");
  platforms.append("atari7800");
  platforms.append("atarijaguar");
  platforms.append("atarilynx");
  platforms.append("atarist");
  platforms.append("c64");
  platforms.append("coleco");
  platforms.append("gamegear");
  platforms.append("gb");
  platforms.append("gba");
  platforms.append("gbc");
  platforms.append("genesis");
  platforms.append("mastersystem");
  platforms.append("megadrive");
  platforms.append("msx");
  platforms.append("n64");
  platforms.append("nds");
  platforms.append("neogeo");
  platforms.append("nes");
  platforms.append("ngpc");
  platforms.append("pcengine");
  platforms.append("psp");
  platforms.append("psx");
  platforms.append("scummvm");
  platforms.append("sega32x");
  platforms.append("segacd");
  platforms.append("snes");
  platforms.append("vectrex");
  platforms.append("videopac");
  platforms.append("virtualboy");
  platforms.append("zxspectrum");

  return platforms;
}

QStringList Platform::getScrapers(QString platform)
{
  QStringList scrapers;
  if(platform == "amiga") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "apple2") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "arcade") {
    scrapers.append("arcadedb");
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atari2600") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atari5200") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atari7800") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atarijaguar") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atarilynx") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "atarist") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "c64") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "coleco") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "gamegear") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "gb") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "gba") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "gbc") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "genesis") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "mastersystem") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "megadrive") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "msx") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "n64") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "nds") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "neogeo") {
    scrapers.append("arcadedb");
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "nes") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "ngpc") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "pcengine") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "psp") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "psx") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("localdb");
  } else if(platform == "scummvm") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("localdb");
  } else if(platform == "sega32x") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "segacd") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "snes") {
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "vectrex") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "videopac") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform == "virtualboy") {
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  } else if(platform  == "zxspectrum") {
    scrapers.append("worldofspectrum");
    scrapers.append("openretro");
    scrapers.append("thegamesdb");
    scrapers.append("screenscraper");
    scrapers.append("localdb");
  }
  return scrapers;
}

QString Platform::getFormats(QString platform)
{
  QString formats = "*.zip *.7z ";
  if(platform == "amiga") {
    formats.append("*.uae *.adf *.dms *.adz *.rp9");
  } else if(platform == "apple2") {
    formats.append("*.dsk");
  } else if(platform == "arcade") {
    formats.append("");
  } else if(platform == "atari2600") {
    formats.append("*.bin *.a26 *.rom *.gz");
  } else if(platform == "atari5200") {
    formats.append("*.a52 *.bas *.bin *.car *.xex *.atr *.xfd *.dcm *.atr.gz *.xfd.gz");
  } else if(platform == "atari7800") {
    formats.append("*.a78 *.bin");
  } else if(platform == "atarijaguar") {
    formats.append("*.j64 *.jag");
  } else if(platform == "atarilynx") {
    formats.append("*.lnx");
  } else if(platform == "atarist") {
    formats.append("*.st *.stx *.img *.rom *.raw *.ipf *.ctr");
  } else if(platform == "c64") {
    formats.append("*.crt *.d64 *.prg *.tap *.t64 *.g64");
  } else if(platform == "coleco") {
    formats.append("*.bin *.col *.rom");
  } else if(platform == "gb") {
    formats.append("*.gb");
  } else if(platform == "gba") {
    formats.append("*.gba");
  } else if(platform == "gbc") {
    formats.append("*.gbc");
  } else if(platform == "gamegear") {
    formats.append("*.gg");
  } else if(platform == "genesis") {
    formats.append("*.smd *.bin *.gen *.md *.sg");
  } else if(platform == "mastersystem") {
    formats.append("*.sms");
  } else if(platform == "megadrive") {
    formats.append("*.smd *.bin *.gen *.md *.sg");
  } else if(platform == "msx") {
    formats.append("*.rom *.mx1 *.mx2 *.col *.dsk");
  } else if(platform == "n64") {
    formats.append("*.z64 *.n64 *.v64");
  } else if(platform == "nds") {
    formats.append("*.nds");
  } else if(platform == "neogeo") {
    formats.append("");
  } else if(platform == "nes") {
    formats.append("*.nes *.smc *.sfc *.fig *.swc *.mgd");
  } else if(platform == "ngpc") {
    formats.append(" *.ngc");
  } else if(platform == "pcengine") {
    formats.append("*.pce");
  } else if(platform == "psp") {
    formats.append("*.cso *.iso *.pbp");
  } else if(platform == "psx") {
    formats.append("*.cue *.cbn *.img *.iso *.m3u *.mdf *.pbp *.toc *.z *.znx");
  } else if(platform == "scummvm") {
    formats.append("*.svm");
  } else if(platform == "sega32x") {
    formats.append("*.32x *.bin *.md *.smd");
  } else if(platform == "snes") {
    formats.append("*.smc *.sfc *.fig *.swc");
  } else if(platform == "segacd") {
    formats.append("*.cue *.iso");
  } else if(platform == "vectrex") {
    formats.append("*.bin *.gam *.vec");
  } else if(platform == "videopac") {
    formats.append("*.bin");
  } else if(platform == "virtualboy") {
    formats.append("*.vb");
  } else if(platform == "zxspectrum") {
    formats.append("*.sna *.szx *.z80 *.tap *.tzx *.gz *.udi *.mgt *.img *.trd *.scl *.dsk");
  }
  return formats;
}

// If user provides no scraping source with '-s' this sets the default for the platform
QString Platform::getDefaultScraper(QString platform)
{
  QString scraper;
  if(platform == "amiga") {
    scraper = "openretro";
  } else if(platform == "arcade") {
    scraper = "arcadedb";
  } else if(platform == "apple2") {
    scraper = "thegamesdb";
  } else if(platform == "atari2600") {
    scraper = "thegamesdb";
  } else if(platform == "atari5200") {
    scraper = "thegamesdb";
  } else if(platform == "atari7800") {
    scraper = "thegamesdb";
  } else if(platform == "atarijaguar") {
    scraper = "thegamesdb";
  } else if(platform == "atarilynx") {
    scraper = "thegamesdb";
  } else if(platform == "atarist") {
    scraper = "thegamesdb";
  } else if(platform == "c64") {
    scraper = "thegamesdb";
  } else if(platform == "coleco") {
    scraper = "thegamesdb";
  } else if(platform == "gamegear") {
    scraper = "thegamesdb";
  } else if(platform == "gb") {
    scraper = "thegamesdb";
  } else if(platform == "gba") {
    scraper = "thegamesdb";
  } else if(platform == "gbc") {
    scraper = "thegamesdb";
  } else if(platform == "genesis") {
    scraper = "thegamesdb";
  } else if(platform == "megadrive") {
    scraper = "thegamesdb";
  } else if(platform == "mastersystem") {
    scraper = "thegamesdb";
  } else if(platform == "msx") {
    scraper = "thegamesdb";
  } else if(platform == "n64") {
    scraper = "thegamesdb";
  } else if(platform == "nds") {
    scraper = "thegamesdb";
  } else if(platform == "neogeo") {
    scraper = "arcadedb";
  } else if(platform == "nes") {
    scraper = "thegamesdb";
  } else if(platform == "ngpc") {
    scraper = "thegamesdb";
  } else if(platform == "pcengine") {
    scraper = "thegamesdb";
  } else if(platform == "psp") {
    scraper = "thegamesdb";
  } else if(platform == "psx") {
    scraper = "thegamesdb";
  } else if(platform == "scummvm") {
    scraper = "thegamesdb";
  } else if(platform == "segacd") {
    scraper = "thegamesdb";
  } else if(platform == "sega32x") {
    scraper = "thegamesdb";
  } else if(platform == "snes") {
    scraper = "thegamesdb";
  } else if(platform == "vectrex") {
    scraper = "thegamesdb";
  } else if(platform == "videopac") {
    scraper = "thegamesdb";
  } else if(platform == "virtualboy") {
    scraper = "thegamesdb";
  } else if(platform == "zxspectrum") {
    scraper = "worldofspectrum";
  }
  return scraper;
}

// This contains all known platform aliases as listed on each of the scraping source sites
QStringList Platform::getAliases(QString platform)
{
  QStringList aliases;
  aliases.append(platform);
  if(platform == "aga") {
    aliases.append("amiga");
    aliases.append("amiga (aga)");
  } else if(platform == "cdtv") {
    aliases.append("amiga cdtv");
  } else if(platform == "cd32") {
    aliases.append("amiga cd32");
  } else if(platform == "arcade") {
    aliases.append("neo geo");
    aliases.append("neo geo cd");
  } else if(platform == "atari2600") {
    aliases.append("atari 2600");
  } else if(platform == "atari7800") {
    aliases.append("atari 7800");
  } else if(platform == "atarist") {
    aliases.append("atari st");
  } else if(platform == "mastersystem") {
    aliases.append("sega master system");
    aliases.append("master system");
  } else if(platform == "gamegear") {
    aliases.append("sega game gear");
    aliases.append("game gear");
  } else if(platform == "gba") {
    aliases.append("nintendo game boy advance");
    aliases.append("game boy advance");
  } else if(platform == "megadrive") {
    aliases.append("sega mega drive");
    aliases.append("mega drive");
  } else if(platform == "coleco") {
    aliases.append("colecovision");
  } else if(platform == "c64") {
    aliases.append("commodore 64");
  } else if(platform == "genesis") {
    aliases.append("sega genesis");
    aliases.append("mega drive");
  } else if(platform == "nes") {
    aliases.append("nintendo entertainment system (nes)");
    aliases.append("nintendo");
  } else if(platform == "pcengine") {
    aliases.append("turbografx 16");
    aliases.append("turbografx cd");
    aliases.append("turbografx-16");
    aliases.append("pc engine");
    aliases.append("pc engine cd-rom");
    aliases.append("pc engine supergrafx");
  } else if(platform == "psx") {
    aliases.append("sony playstation");
    aliases.append("playstation");
  } else if(platform == "psp") {
    aliases.append("sony playstation portable");
  } else if(platform == "snes") {
    aliases.append("super nintendo (snes)");
    aliases.append("super nintendo");
  } else if(platform == "zxspectrum") {
    aliases.append("sinclair zx spectrum");
    aliases.append("zx spectrum");
  } else if(platform == "atari5200") {
    aliases.append("atari 5200");
  } else if(platform == "apple2") {
    aliases.append("apple ii");
  } else if(platform == "atarijaguar") {
    aliases.append("atari jaguar");
    aliases.append("jaguar");
  } else if(platform == "atarilynx") {
    aliases.append("atari lynx");
    aliases.append("lynx");
  } else if(platform == "neogeo") {
    aliases.append("neo geo");
    aliases.append("neo geo cd");
    aliases.append("arcade");
    aliases.append("neo-geo");
  } else if(platform == "ngpc") {
    aliases.append("neo geo pocket color");
    aliases.append("neo-geo pocket color");
  } else if(platform == "scummvm") {
    aliases.append("pc");
    aliases.append("amiga");
    aliases.append("amiga cd32");
    aliases.append("dos");
    aliases.append("cd32");
  } else if(platform == "msx") {
    aliases.append("msx2");
    aliases.append("msx2+");
    aliases.append("msx r turbo");
  } else if(platform == "n64") {
    aliases.append("nintendo 64");
  } else if(platform == "nds") {
    aliases.append("nintendo ds");
  } else if(platform == "gb") {
    aliases.append("nintendo game boy");
    aliases.append("game boy");
  } else if(platform == "gba") {
    aliases.append("nintendo game boy advance");
    aliases.append("game boy advance");
  } else if(platform == "gbc") {
    aliases.append("nintendo game boy color");
    aliases.append("game boy color");
  } else if(platform == "sega32x") {
    aliases.append("sega 32x");
    aliases.append("megadrive 32x");
  } else if(platform == "segacd") {
    aliases.append("sega cd");
  } else if(platform == "videopac") {
    aliases.append("magnavox odyssey 2");
    aliases.append("videopac g7000");
    aliases.append("magnavox odyssey²");
  } else if(platform == "virtualboy") {
    aliases.append("nintendo virtual boy");
    aliases.append("virtual boy");
  }
  return aliases;
}

// --- Console colors ---
// Black        0;30     Dark Gray     1;30
// Red          0;31     Light Red     1;31
// Green        0;32     Light Green   1;32
// Brown/Orange 0;33     Yellow        1;33
// Blue         0;34     Light Blue    1;34
// Purple       0;35     Light Purple  1;35
// Cyan         0;36     Light Cyan    1;36
// Light Gray   0;37     White         1;37
