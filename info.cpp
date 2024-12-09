
#include<iostream>
#include"choice.hpp"
using namespace std;
void infoAboutEle(int n){
    switch (n)
            {
            case 1:
                cout << "Hydrogen" << endl;
                cout << "Element Symbol: H" << endl;
                cout << "Word origin: From the Greek 'hydro' and 'genes' meaning water-forming" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 1" << endl;
                cout << "Electron configuration: 1s^1" << endl;
                cout << "Electronegativity: 2.20" << endl;
                cout << "Atomic weight: 1.008" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Diatomic molecule, the lightest element" << endl
                     << endl;
                break;
            case 2:
                cout << "Helium" << endl;
                cout << "Element Symbol: He" << endl;
                cout << "Word origin: Helios (means sun)" << endl;
                cout << "Element category: Gas" << endl;
                cout << "Element number: 2" << endl;
                cout << "Electron configuration: 1s^2" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: 4.002602" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Inert gas" << endl
                     << endl;
                break;
            case 3:
                cout << " Lithium" << endl;
                cout << "Element Symbol: Li" << endl;
                cout << "Word origin: From the Greek 'lithos' meaning stone" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 3" << endl;
                cout << "Electron configuration: [He] 2s^1" << endl;
                cout << "Electronegativity: 0.98" << endl;
                cout << "Atomic weight: 6.94" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silvery-white metal" << endl
                     << endl;
                break;
            case 4:
                cout << "Beryllium" << endl;
                cout << "Element Symbol: Be" << endl;
                cout << "Word origin: From the Greek 'beryllos' meaning beryl" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 4" << endl;
                cout << "Electron configuration: [He] 2s^2" << endl;
                cout << "Electronegativity: 1.57" << endl;
                cout << "Atomic weight: 9.0121831" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Brittle, steel-gray metal" << endl
                     << endl;
                break;
            case 5:
                cout << " Boron" << endl;
                cout << "Element Symbol: B" << endl;
                cout << "Word origin: Arabic 'buraq'" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 5" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^1" << endl;
                cout << "Electronegativity: 2.04" << endl;
                cout << "Atomic weight: 10.81" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brown, amorphous powder" << endl
                     << endl;
                break;
            case 6:
                cout << "Carbon" << endl;
                cout << "Element Symbol: C" << endl;
                cout << "Word origin: Latin 'carbo' meaning charcoal" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 6" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^2" << endl;
                cout << "Electronegativity: 2.55" << endl;
                cout << "Atomic weight: 12.011" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Basis of all known life" << endl
                     << endl;
                break;
            case 7:
                cout << " Nitrogen" << endl;
                cout << "Element Symbol: N" << endl;
                cout << "Word origin: Greek 'nitron' and 'genes' meaning nitre-forming" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 7" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^3" << endl;
                cout << "Electronegativity: 3.04" << endl;
                cout << "Atomic weight: 14.007" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Colorless, odorless, tasteless gas" << endl
                     << endl;
                break;
            case 8:
                cout << "Oxygen" << endl;
                cout << "Element Symbol: O" << endl;
                cout << "Word origin: Greek 'oxy' and 'genes' meaning acid-former" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 8" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^4" << endl;
                cout << "Electronegativity: 3.44" << endl;
                cout << "Atomic weight: 15.999" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Essential for respiration" << endl
                     << endl;
                break;
            case 9:
                cout << " Fluorine" << endl;
                cout << "Element Symbol: F" << endl;
                cout << "Word origin: Latin 'fluere' meaning to flow" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 9" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^5" << endl;
                cout << "Electronegativity: 3.98" << endl;
                cout << "Atomic weight: 18.998403163" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Pale yellow gas, highly reactive" << endl
                     << endl;
            case 10:
                cout << "Neon" << endl;
                cout << "Element Symbol: Ne" << endl;
                cout << "Word origin: Greek 'neos' meaning new" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 10" << endl;
                cout << "Electron configuration: [He] 2s^2 2p^6" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: 20.1797" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                break;
            case 11:
                cout << "Element Symbol: Na" << endl;
                cout << "Word origin: Latin 'natrium'" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 11" << endl;
                cout << "Electron configuration: [Ne] 3s^1" << endl;
                cout << "Electronegativity: 0.93" << endl;
                cout << "Atomic weight: 22.98976928" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silvery-white, highly reactive metal" << endl;
                break;
            case 12:
                cout << "Element Symbol: Mg" << endl;
                cout << "Word origin: From the Greek 'magnesia'" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 12" << endl;
                cout << "Electron configuration: [Ne] 3s^2" << endl;
                cout << "Electronegativity: 1.31" << endl;
                cout << "Atomic weight: 24.305" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Essential for life, present in chlorophyll" << endl;
                break;
            case 13:
                cout << "Element Symbol: Al" << endl;
                cout << "Word origin: Latin 'alumen'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 13" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^1" << endl;
                cout << "Electronegativity: 1.61" << endl;
                cout << "Atomic weight: 26.9815385" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Lightweight, silvery-white metal, common in soil" << endl;
                break;
            case 14:
                cout << "Element Symbol: Si" << endl;
                cout << "Word origin: Latin 'silex' or 'silicis' meaning flint" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 14" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^2" << endl;
                cout << "Electronegativity: 1.90" << endl;
                cout << "Atomic weight: 28.085" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Second most abundant element in Earth's crust" << endl;
                break;
            case 15:
                cout << "Element Symbol: P" << endl;
                cout << "Word origin: Greek 'phosphoros' meaning bringer of light" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 15" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^3" << endl;
                cout << "Electronegativity: 2.19" << endl;
                cout << "Atomic weight: 30.973761998" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Essential for life, found in DNA and RNA" << endl;
                break;
            case 16:
                cout << "Element Symbol: S" << endl;
                cout << "Word origin: Latin 'sulfurium' or 'sulphur' meaning brimstone" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 16" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^4" << endl;
                cout << "Electronegativity: 2.58" << endl;
                cout << "Atomic weight: 32.06" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Known for its distinct smell, yellow solid" << endl;
                break;
            case 17:
                cout << "Element Symbol: Cl" << endl;
                cout << "Word origin: Greek 'chloros' meaning greenish-yellow" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 17" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^5" << endl;
                cout << "Electronegativity: 3.16" << endl;
                cout << "Atomic weight: 35.45" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Poisonous, greenish-yellow gas" << endl;
                break;
            case 18:
                cout << "Element Symbol: Ar" << endl;
                cout << "Word origin: Greek 'argos' meaning lazy or inactive" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 18" << endl;
                cout << "Electron configuration: [Ne] 3s^2 3p^6" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: 39.948" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Inert gas, present in Earth's atmosphere" << endl;
                break;
            case 19:
                cout << "Element Symbol: K" << endl;
                cout << "Word origin: Latin 'kalium'" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 19" << endl;
                cout << "Electron configuration: [Ar] 4s^1" << endl;
                cout << "Electronegativity: 0.82" << endl;
                cout << "Atomic weight: 39.0983" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, waxy, silver-metallic element" << endl;
                break;
            case 20:
                cout << "Element Symbol: Ca" << endl;
                cout << "Word origin: Latin 'calx' meaning lime" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 20" << endl;
                cout << "Electron configuration: [Ar] 4s^2" << endl;
                cout << "Electronegativity" << endl;
                break;

            case 21:
                cout << "Element Symbol: Sc" << endl;
                cout << "Word origin: From the Greek 'skandia' meaning Scandinavia" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 21" << endl;
                cout << "Electron configuration: [Ar] 3d^1 4s^2" << endl;
                cout << "Electronegativity: 1.36" << endl;
                cout << "Atomic weight: 44.955908" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white metallic transition metal" << endl;
                break;
            case 22:
                cout << "Element Symbol: Ti" << endl;
                cout << "Word origin: From the Greek 'titanos' meaning Titans" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 22" << endl;
                cout << "Electron configuration: [Ar] 3d^2 4s^2" << endl;
                cout << "Electronegativity: 1.54" << endl;
                cout << "Atomic weight: 47.867" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Resistant to corrosion, used in aerospace industry" << endl;
                break;
            case 23:
                cout << "Element Symbol: V" << endl;
                cout << "Word origin: Named after Vanadis, a Norse goddess" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 23" << endl;
                cout << "Electron configuration: [Ar] 3d^3 4s^2" << endl;
                cout << "Electronegativity: 1.63" << endl;
                cout << "Atomic weight: 50.9415" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Hard, silvery-grey, ductile metal" << endl;
                break;
            case 24:
                cout << "Element Symbol: Cr" << endl;
                cout << "Word origin: From the Greek 'chroma' meaning color" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 24" << endl;
                cout << "Electron configuration: [Ar] 3d^5 4s^1" << endl;
                cout << "Electronegativity: 1.66" << endl;
                cout << "Atomic weight: 51.9961" << endl;
                cout << "Magnetic ordering: Antiferromagnetic" << endl;
                cout << "Special information: Hard, brittle, metallic element" << endl;
                break;
            case 25:
                cout << "Element Symbol: Mn" << endl;
                cout << "Word origin: From the Latin 'magnes' meaning magnet" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 25" << endl;
                cout << "Electron configuration: [Ar] 3d^5 4s^2" << endl;
                cout << "Electronegativity: 1.55" << endl;
                cout << "Atomic weight: 54.938044" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Hard, brittle, gray-white metal" << endl;
                break;
            case 26:
                cout << "Element Symbol: Fe" << endl;
                cout << "Word origin: From the Latin 'ferrum' meaning iron" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 26" << endl;
                cout << "Electron configuration: [Ar] 3d^6 4s^2" << endl;
                cout << "Electronegativity: 1.83" << endl;
                cout << "Atomic weight: 55.845" << endl;
                cout << "Magnetic ordering: Ferromagnetic" << endl;
                cout << "Special information: Most common element on Earth by mass" << endl;
                break;
            case 27:
                cout << "Element Symbol: Co" << endl;
                cout << "Word origin: Named after the German word 'kobold' meaning goblin" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 27" << endl;
                cout << "Electron configuration: [Ar] 3d^7 4s^2" << endl;
                cout << "Electronegativity: 1.88" << endl;
                cout << "Atomic weight: 58.933194" << endl;
                cout << "Magnetic ordering: Ferromagnetic" << endl;
                cout << "Special information: Hard, brittle, silvery-blue metal" << endl;
                break;
            case 28:
                cout << "Element Symbol: Ni" << endl;
                cout << "Word origin: Named after the German mythological creature 'Nickel'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 28" << endl;
                cout << "Electron configuration: [Ar] 3d^8 4s^2" << endl;
                cout << "Electronegativity: 1.91" << endl;
                cout << "Atomic weight: 58.6934" << endl;
                cout << "Magnetic ordering: Ferromagnetic" << endl;
                cout << "Special information: Hard, ductile, silvery-white metal" << endl;
                break;
            case 29:
                cout << "Element Symbol: Cu" << endl;
                cout << "Word origin: From the Latin 'cuprum' meaning Cyprus" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 29" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^1" << endl;
                cout << "Electronegativity: 1.90" << endl;
                cout << "Atomic weight: 63.546" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Ductile metal, used in electrical wiring" << endl;
                break;
            case 30:
                cout << "Element Symbol: Zn" << endl;
                cout << "Word origin: German 'Zink'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 30" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2" << endl;
                cout << "Electronegativity: 1.65" << endl;
                cout << "Atomic weight: 65.38" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Bluish-white, lustrous metal" << endl;
                break;
            case 31:
                cout << "Element Symbol: Ga" << endl;
                cout << "Word origin: Named after the Latin 'Gallia' meaning France" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 31" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^1" << endl;
                cout << "Electronegativity: 1.81" << endl;
                cout << "Atomic weight: 69.723" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Soft, silvery metal, melts near room temperature" << endl;
                break;
            case 32:
                cout << "Element Symbol: Ge" << endl;
                cout << "Word origin: Greek 'ge' meaning Earth" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 32" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^2" << endl;
                cout << "Electronegativity: 2.01" << endl;
                cout << "Atomic weight: 72.63" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brittle, crystalline, gray-white metalloid" << endl;
                break;
            case 33:
                cout << "Element Symbol: As" << endl;
                cout << "Word origin: Greek 'arsenikon' meaning yellow orpiment" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 33" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^3" << endl;
                cout << "Electronegativity: 2.18" << endl;
                cout << "Atomic weight: 74.921595" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Toxic, metallic gray, brittle, semi-metallic" << endl;
                break;
            case 34:
                cout << "Element Symbol: Se" << endl;
                cout << "Word origin: Greek 'selene' meaning moon" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 34" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^4" << endl;
                cout << "Electronegativity: 2.55" << endl;
                cout << "Atomic weight: 78.971" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brittle, nonmetallic, essential for life" << endl;
                break;
            case 35:
                cout << "Element Symbol: Br" << endl;
                cout << "Word origin: Greek 'bromos' meaning stench" << endl;
                cout << "Element category: Nonmetal" << endl;
                cout << "Element number: 35" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^5" << endl;
                cout << "Electronegativity: 2.96" << endl;
                cout << "Atomic weight: 79.904" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Reddish-brown, volatile liquid" << endl;
                break;
            case 36:
                cout << "Element Symbol: Kr" << endl;
                cout << "Word origin: From the Greek 'kryptos' meaning hidden" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 36" << endl;
                cout << "Electron configuration: [Ar] 3d^10 4s^2 4p^6" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: 83.798" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Inert gas, present in Earth's atmosphere" << endl;
                break;
            case 37:
                cout << "Element Symbol: Rb" << endl;
                cout << "Word origin: Latin 'rubidus' meaning deep red" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 37" << endl;
                cout << "Electron configuration: [Kr] 5s^1" << endl;
                cout << "Electronegativity: 0.82" << endl;
                cout << "Atomic weight: 85.4678" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silvery-white metallic element" << endl;
                break;
            case 38:
                cout << "Element Symbol: Sr" << endl;
                cout << "Word origin: Named after the Scottish village of Strontian" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 38" << endl;
                cout << "Electron configuration: [Kr] 5s^2" << endl;
                cout << "Electronegativity: 0.95" << endl;
                cout << "Atomic weight: 87.62" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silver-white, yellowish metallic element" << endl;
                break;
            case 39:
                cout << "Element Symbol: Y" << endl;
                cout << "Word origin: Named after the Latin 'Yttria' meaning Yttrium" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 39" << endl;
                cout << "Electron configuration: [Kr] 4d^1 5s^2" << endl;
                cout << "Electronegativity: 1.22" << endl;
                cout << "Atomic weight: 88.90584" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-metallic transition metal" << endl;
                break;
            case 40:
                cout << "Element Symbol: Zr" << endl;
                cout << "Word origin: From the Arabic 'zargun' meaning gold color" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 40" << endl;
                cout << "Electron configuration: [Kr] 4d^2 5s^2" << endl;
                cout << "Electronegativity: 1.33" << endl;
                cout << "Atomic weight: 91.224" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Shiny, gray-white, strong transition metal" << endl;
                break;
            case 41:
                cout << "Element Symbol: Nb" << endl;
                cout << "Word origin: Named after the Scandinavian goddess 'Njord'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 41" << endl;
                cout << "Electron configuration: [Kr] 4d^4 5s^1" << endl;
                cout << "Electronegativity: 1.6" << endl;
                cout << "Atomic weight: 92.90637" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, ductile, silvery-white metal" << endl;
                break;
            case 42:
                cout << "Element Symbol: Mo" << endl;
                cout << "Word origin: Named after the Greek 'molybdos' meaning lead" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 42" << endl;
                cout << "Electron configuration: [Kr] 4d^5 5s^1" << endl;
                cout << "Electronegativity: 2.16" << endl;
                cout << "Atomic weight: 95.95" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, hard, brittle metal" << endl;
                break;
            case 43:
                cout << "Element Symbol: Tc" << endl;
                cout << "Word origin: Named after the planet 'Technetium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 43" << endl;
                cout << "Electron configuration: [Kr] 4d^5 5s^2" << endl;
                cout << "Electronegativity: 1.9" << endl;
                cout << "Atomic weight: 98" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, silvery-gray transition metal" << endl;
                break;
            case 44:
                cout << "Element Symbol: Ru" << endl;
                cout << "Word origin: Named after Ruthenia, Latin for Russia" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 44" << endl;
                cout << "Electron configuration: [Kr] 4d^7 5s^1" << endl;
                cout << "Electronegativity: 2.2" << endl;
                cout << "Atomic weight: 101.07" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Hard, brittle, silvery-white metal" << endl;
                break;
            case 45:
                cout << "Element Symbol: Rh" << endl;
                cout << "Word origin: From the Greek 'rhodon' meaning rose" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 45" << endl;
                cout << "Electron configuration: [Kr] 4d^8 5s^1" << endl;
                cout << "Electronegativity: 2.28" << endl;
                cout << "Atomic weight: 102.90550" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white metallic transition metal" << endl;
                break;
            case 46:
                cout << "Element Symbol: Pd" << endl;
                cout << "Word origin: Named after the asteroid 'Pallas'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 46" << endl;
                cout << "Electron configuration: [Kr] 4d^10" << endl;
                cout << "Electronegativity: 2.20" << endl;
                cout << "Atomic weight: 106.42" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, ductile, silvery-white metal" << endl;
                break;
            case 47:
                cout << "Element Symbol: Ag" << endl;
                cout << "Word origin: From the Latin 'argentum'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 47" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^1" << endl;
                cout << "Electronegativity: 1.93" << endl;
                cout << "Atomic weight: 107.8682" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Precious, shiny, white metal" << endl;
                break;
            case 48:
                cout << "Element Symbol: Cd" << endl;
                cout << "Word origin: Named after the Greek god 'Cadmus'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 48" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2" << endl;
                cout << "Electronegativity: 1.69" << endl;
                cout << "Atomic weight: 112.414" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Bluish-white, ductile, malleable metal" << endl;
                break;
            case 49:
                cout << "Element Symbol: In" << endl;
                cout << "Word origin: From the Latin 'indium'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 49" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^1" << endl;
                cout << "Electronegativity: 1.78" << endl;
                cout << "Atomic weight: 114.818" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery-white metal" << endl;
                break;
            case 50:
                cout << "Element Symbol: Sn" << endl;
                cout << "Word origin: From the Latin 'stannum' meaning tin" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 50" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^2" << endl;
                cout << "Electronegativity: 1.96" << endl;
                cout << "Atomic weight: 118.710" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery-white metal" << endl;
                break;
            case 51:
                cout << "Element Symbol: Sb" << endl;
                cout << "Word origin: From the Latin 'stibium' meaning mark" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 51" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^3" << endl;
                cout << "Electronegativity: 2.05" << endl;
                cout << "Atomic weight: 121.760" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brittle, silver-white metalloid" << endl;
                break;
            case 52:
                cout << "Element Symbol: Te" << endl;
                cout << "Word origin: Named after the Latin 'tellus' meaning Earth" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 52" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^4" << endl;
                cout << "Electronegativity: 2.1" << endl;
                cout << "Atomic weight: 127.60" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brittle, mildly toxic, silver-white metalloid" << endl;
                break;
            case 53:
                cout << "Element Symbol: I" << endl;
                cout << "Word origin: From the Greek 'iodes' meaning violet" << endl;
                cout << "Element category: Halogen" << endl;
                cout << "Element number: 53" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^5" << endl;
                cout << "Electronegativity: 2.66" << endl;
                cout << "Atomic weight: 126.90447" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Shiny, dark purple-black, corrosive halogen" << endl;
                break;
            case 54:
                cout << "Element Symbol: Xe" << endl;
                cout << "Word origin: From the Greek 'xenos' meaning stranger" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 54" << endl;
                cout << "Electron configuration: [Kr] 4d^10 5s^2 5p^6" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: 131.293" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Colorless, dense, odorless noble gas" << endl;
                break;
            case 55:
                cout << "Element Symbol: Cs" << endl;
                cout << "Word origin: From the Latin 'caesius' meaning sky blue" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 55" << endl;
                cout << "Electron configuration: [Xe] 6s^1" << endl;
                cout << "Electronegativity: 0.79" << endl;
                cout << "Atomic weight: 132.90545196" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, gold-colored, alkali metal" << endl;
                break;
            case 56:
                cout << "Element Symbol: Ba" << endl;
                cout << "Word origin: From the Greek 'barys' meaning heavy" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 56" << endl;
                cout << "Electron configuration: [Xe] 6s^2" << endl;
                cout << "Electronegativity: 0.89" << endl;
                cout << "Atomic weight: 137.327" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Soft, silvery alkaline earth metal" << endl;
                break;
            case 57:
                cout << "Element Symbol: La" << endl;
                cout << "Word origin: Named after the Greek 'Lanthanein' meaning to lie hidden" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 57" << endl;
                cout << "Electron configuration: [Xe] 5d^1 6s^2" << endl;
                cout << "Electronegativity: 1.1" << endl;
                cout << "Atomic weight: 138.90547" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, ductile, silvery-white metal" << endl;
                break;
            case 58:
                cout << "Element Symbol: Ce" << endl;
                cout << "Word origin: Named after the dwarf planet 'Ceres'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 58" << endl;
                cout << "Electron configuration: [Xe] 4f^1 5d^1 6s^2" << endl;
                cout << "Electronegativity: 1.12" << endl;
                cout << "Atomic weight: 140.116" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silvery, ductile metal" << endl;
                break;
            case 59:
                cout << "Element Symbol: Pr" << endl;
                cout << "Word origin: Named after the planet 'Praseodymium'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 59" << endl;
                cout << "Electron configuration: [Xe] 4f^3 6s^2" << endl;
                cout << "Electronegativity: 1.13" << endl;
                cout << "Atomic weight: 140.90766" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery metal" << endl;
                break;
            case 60:
                cout << "Element Symbol: Nd" << endl;
                cout << "Word origin: Named after the planet 'Neodymium'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 60" << endl;
                cout << "Electron configuration: [Xe] 4f^4 6s^2" << endl;
                cout << "Electronegativity: 1.14" << endl;
                cout << "Atomic weight: 144.242" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery metal" << endl;
                break;
            case 61:
                cout << "Element Symbol: Pm" << endl;
                cout << "Word origin: Named after the planet 'Promethium'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 61" << endl;
                cout << "Electron configuration: [Xe] 4f^5 6s^2" << endl;
                cout << "Electronegativity: 1.13" << endl;
                cout << "Atomic weight: 145" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, rare-earth metal" << endl;
                break;
            case 62:
                cout << "Element Symbol: Sm" << endl;
                cout << "Word origin: Named after the mineral 'Samarium'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 62" << endl;
                cout << "Electron configuration: [Xe] 4f^6 6s^2" << endl;
                cout << "Electronegativity: 1.17" << endl;
                cout << "Atomic weight: 150.36" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery metallic rare earth metal" << endl;
                break;
            case 63:
                cout << "Element Symbol: Eu" << endl;
                cout << "Word origin: Named after the continent Europe" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 63" << endl;
                cout << "Electron configuration: [Xe] 4f^7 6s^2" << endl;
                cout << "Electronegativity: 1.2" << endl;
                cout << "Atomic weight: 151.964" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, silvery-white, reactive metal" << endl;
                break;
            case 64:
                cout << "Element Symbol: Gd" << endl;
                cout << "Word origin: Named after the mineral 'Gadolinite'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 64" << endl;
                cout << "Electron configuration: [Xe] 4f^7 5d^1 6s^2" << endl;
                cout << "Electronegativity: 1.20" << endl;
                cout << "Atomic weight: 157.25" << endl;
                cout << "Magnetic ordering: Ferromagnetic" << endl;
                cout << "Special information: Soft, ductile, silvery metal" << endl;
                break;
            case 65:
                cout << "Element Symbol: Tb" << endl;
                cout << "Word origin: Named after the Swedish village 'Ytterby'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 65" << endl;
                cout << "Electron configuration: [Xe] 4f^9 6s^2" << endl;
                cout << "Electronegativity: 1.2" << endl;
                cout << "Atomic weight: 158.92535" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery-white metal" << endl;
                break;
            case 66:
                cout << "Element Symbol: Dy" << endl;
                cout << "Word origin: Named after the Swedish chemist 'Carl Gustaf Mosander'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 66" << endl;
                cout << "Electron configuration: [Xe] 4f^10 6s^2" << endl;
                cout << "Electronegativity: 1.22" << endl;
                cout << "Atomic weight: 162.500" << endl;
                cout << "Magnetic ordering: Ferromagnetic" << endl;
                cout << "Special information: Soft, silvery-white, rare-earth metal" << endl;
                break;
            case 67:
                cout << "Element Symbol: Ho" << endl;
                cout << "Word origin: Named after the Swedish village 'Ytterby'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 67" << endl;
                cout << "Electron configuration: [Xe] 4f^11 6s^2" << endl;
                cout << "Electronegativity: 1.23" << endl;
                cout << "Atomic weight: 164.93033" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery-white metal" << endl;
                break;
            case 68:
                cout << "Element Symbol: Er" << endl;
                cout << "Word origin: Named after the Swedish village 'Ytterby'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 68" << endl;
                cout << "Electron configuration: [Xe] 4f^12 6s^2" << endl;
                cout << "Electronegativity: 1.24" << endl;
                cout << "Atomic weight: 167.259" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, silvery-white metal" << endl;
                break;
            case 69:
                cout << "Element Symbol: Tm" << endl;
                cout << "Word origin: Named after the Swedish village 'Ytterby'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 69" << endl;
                cout << "Electron configuration: [Xe] 4f^13 6s^2" << endl;
                cout << "Electronegativity: 1.25" << endl;
                cout << "Atomic weight: 168.93422" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-gray, rare-earth metal" << endl;
                break;
            case 70:
                cout << "Element Symbol: Yb" << endl;
                cout << "Word origin: Named after the Swedish village 'Ytterby'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 70" << endl;
                cout << "Electron configuration: [Xe] 4f^14 6s^2" << endl;
                cout << "Electronegativity: 1.1" << endl;
                cout << "Atomic weight: 173.045" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Soft, malleable, ductile, silvery-white metal" << endl;
                break;
            case 71:
                cout << "Element Symbol: Lu" << endl;
                cout << "Word origin: Named after the mineral 'Lutetia'" << endl;
                cout << "Element category: Lanthanide" << endl;
                cout << "Element number: 71" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^1 6s^2" << endl;
                cout << "Electronegativity: 1.27" << endl;
                cout << "Atomic weight: 174.9668" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, rare-earth metal" << endl;
                break;
            case 72:
                cout << "Element Symbol: Hf" << endl;
                cout << "Word origin: Named after the Latin 'Hafnia' meaning Copenhagen" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 72" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^2 6s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: 178.49" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Shiny, silvery, ductile metal" << endl;
                break;
            case 73:
                cout << "Element Symbol: Ta" << endl;
                cout << "Word origin: Named after the Swedish word 'tantal' meaning heavy" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 73" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^3 6s^2" << endl;
                cout << "Electronegativity: 1.5" << endl;
                cout << "Atomic weight: 180.94788" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Heavy, hard, gray, metallic transition metal" << endl;
                break;
            case 74:
                cout << "Element Symbol: W" << endl;
                cout << "Word origin: Named after the German 'Wolfram' meaning tungsten" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 74" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^4 6s^2" << endl;
                cout << "Electronegativity: 2.36" << endl;
                cout << "Atomic weight: 183.84" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Grayish-white, lustrous, hard metal" << endl;
                break;
            case 75:
                cout << "Element Symbol: Re" << endl;
                cout << "Word origin: Named after the Latin 'rhenium' meaning Rhine" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 75" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^5 6s^2" << endl;
                cout << "Electronegativity: 1.9" << endl;
                cout << "Atomic weight: 186.207" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, heavy, third-row transition metal" << endl;
                break;
            case 76:
                cout << "Element Symbol: Os" << endl;
                cout << "Word origin: Named after the Greek 'osme' meaning smell" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 76" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^6 6s^2" << endl;
                cout << "Electronegativity: 2.2" << endl;
                cout << "Atomic weight: 190.23" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Extremely hard, bluish-white transition metal" << endl;
                break;
            case 77:
                cout << "Element Symbol: Ir" << endl;
                cout << "Word origin: Named after the Latin 'Iridium' meaning rainbow" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 77" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^7 6s^2" << endl;
                cout << "Electronegativity: 2.2" << endl;
                cout << "Atomic weight: 192.217" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Dense, corrosion-resistant, silvery-white transition metal" << endl;
                break;
            case 78:
                cout << "Element Symbol: Pt" << endl;
                cout << "Word origin: Named after the element 'Platinum'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 78" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^9 6s^1" << endl;
                cout << "Electronegativity: 2.28" << endl;
                cout << "Atomic weight: 195.084" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Silvery-white, lustrous, dense metal" << endl;
                break;
            case 79:
                cout << "Element Symbol: Au" << endl;
                cout << "Word origin: From the Latin 'aurum' meaning gold" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 79" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^1" << endl;
                cout << "Electronegativity: 2.54" << endl;
                cout << "Atomic weight: 196.966569" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Soft, yellow, dense, malleable metal" << endl;
                break;
            case 80:
                cout << "Element Symbol: Hg" << endl;
                cout << "Word origin: Named after the planet 'Mercury'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 80" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2" << endl;
                cout << "Electronegativity: 2.00" << endl;
                cout << "Atomic weight: 200.592" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Silvery-white, dense, poor conductor of heat" << endl;
                break;
            case 81:
                cout << "Element Symbol: Tl" << endl;
                cout << "Word origin: Named after the Greek 'thallos' meaning green twig" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 81" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^1" << endl;
                cout << "Electronegativity: 2.04" << endl;
                cout << "Atomic weight: 204.38" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Silvery-white, malleable, ductile metal" << endl;
                break;
            case 82:
                cout << "Element Symbol: Pb" << endl;
                cout << "Word origin: From the Latin 'plumbum' meaning lead" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 82" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^2" << endl;
                cout << "Electronegativity: 2.33" << endl;
                cout << "Atomic weight: 207.2" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Dense, soft, malleable, bluish-white metal" << endl;
                break;
            case 83:
                cout << "Element Symbol: Bi" << endl;
                cout << "Word origin: From the Greek 'bismuthos' meaning white mass" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 83" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^3" << endl;
                cout << "Electronegativity: 2.02" << endl;
                cout << "Atomic weight: 208.98040" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Brittle, pinkish-white, heavy metal" << endl;
                break;
            case 84:
                cout << "Element Symbol: Po" << endl;
                cout << "Word origin: Named after the planet 'Pluto'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 84" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^4" << endl;
                cout << "Electronegativity: 2.0" << endl;
                cout << "Atomic weight: [210]" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Radioactive, rare, metallic element" << endl;
                break;
            case 85:
                cout << "Element Symbol: At" << endl;
                cout << "Word origin: Named after the Greek 'astatos' meaning unstable" << endl;
                cout << "Element category: Metalloid" << endl;
                cout << "Element number: 85" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^5" << endl;
                cout << "Electronegativity: 2.2" << endl;
                cout << "Atomic weight: [210]" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Radioactive, halogen, rare, metalloid" << endl;
                break;
            case 86:
                cout << "Element Symbol: Rn" << endl;
                cout << "Word origin: Named after the element 'Radon'" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 86" << endl;
                cout << "Electron configuration: [Xe] 4f^14 5d^10 6s^2 6p^6" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: [222]" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Colorless, odorless, tasteless noble gas" << endl;
                break;
            case 87:
                cout << "Element Symbol: Fr" << endl;
                cout << "Word origin: Named after the element 'Francium'" << endl;
                cout << "Element category: Alkali metal" << endl;
                cout << "Element number: 87" << endl;
                cout << "Electron configuration: [Rn] 7s^1" << endl;
                cout << "Electronegativity: 0.7" << endl;
                cout << "Atomic weight: [223]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Highly radioactive alkali metal" << endl;
                break;
            case 88:
                cout << "Element Symbol: Ra" << endl;
                cout << "Word origin: Named after the element 'Radium'" << endl;
                cout << "Element category: Alkaline earth metal" << endl;
                cout << "Element number: 88" << endl;
                cout << "Electron configuration: [Rn] 7s^2" << endl;
                cout << "Electronegativity: 0.9" << endl;
                cout << "Atomic weight: [226]" << endl;
                cout << "Magnetic ordering: Diamagnetic" << endl;
                cout << "Special information: Highly radioactive alkaline earth metal" << endl;
                break;
            case 89:
                cout << "Element Symbol: Ac" << endl;
                cout << "Word origin: Named after the element 'Actinium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 89" << endl;
                cout << "Electron configuration: [Rn] 6d^1 7s^2" << endl;
                cout << "Electronegativity: 1.1" << endl;
                cout << "Atomic weight: [227]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white radioactive metal" << endl;
                break;
            case 90:
                cout << "Element Symbol: Th" << endl;
                cout << "Word origin: Named after the planet 'Thorium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 90" << endl;
                cout << "Electron configuration: [Rn] 6d^2 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: 232.0377" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery, often black tarnished, radioactive metal" << endl;
                break;
            case 91:
                cout << "Element Symbol: Pa" << endl;
                cout << "Word origin: Named after the planet 'Protactinium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 91" << endl;
                cout << "Electron configuration: [Rn] 5f^2 6d^1 7s^2" << endl;
                cout << "Electronegativity: 1.5" << endl;
                cout << "Atomic weight: 231.03588" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery metallic, radioactive actinide" << endl;
                break;
            case 92:
                cout << "Element Symbol: U" << endl;
                cout << "Word origin: Named after the planet 'Uranus'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 92" << endl;
                cout << "Electron configuration: [Rn] 5f^3 6d^1 7s^2" << endl;
                cout << "Electronegativity: 1.38" << endl;
                cout << "Atomic weight: 238.02891" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-gray metallic, radioactive actinide" << endl;
                break;
            case 93:
                cout << "Element Symbol: Np" << endl;
                cout << "Word origin: Named after the planet 'Neptunium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 93" << endl;
                cout << "Electron configuration: [Rn] 5f^4 6d^1 7s^2" << endl;
                cout << "Electronegativity: 1.36" << endl;
                cout << "Atomic weight: [237]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery metallic, radioactive actinide" << endl;
                break;
            case 94:
                cout << "Element Symbol: Pu" << endl;
                cout << "Word origin: Named after the planet 'Pluto'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 94" << endl;
                cout << "Electron configuration: [Rn] 5f^6 7s^2" << endl;
                cout << "Electronegativity: 1.28" << endl;
                cout << "Atomic weight: [244]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, malleable, radioactive actinide" << endl;
                break;
            case 95:
                cout << "Element Symbol: Am" << endl;
                cout << "Word origin: Named after the planet 'Americium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 95" << endl;
                cout << "Electron configuration: [Rn] 5f^7 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [243]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, radioactive actinide" << endl;
                break;

            case 96:
                cout << "Element Symbol: Cm" << endl;
                cout << "Word origin: Named after the element 'Curium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 96" << endl;
                cout << "Electron configuration: [Rn] 5f^7 6d^1 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [247]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Silvery-white, radioactive actinide" << endl;
                break;
            case 97:
                cout << "Element Symbol: Bk" << endl;
                cout << "Word origin: Named after the element 'Berkelium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 97" << endl;
                cout << "Electron configuration: [Rn] 5f^9 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [247]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 98:
                cout << "Element Symbol: Cf" << endl;
                cout << "Word origin: Named after the element 'Californium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 98" << endl;
                cout << "Electron configuration: [Rn] 5f^10 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [251]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 99:
                cout << "Element Symbol: Es" << endl;
                cout << "Word origin: Named after the element 'Einsteinium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 99" << endl;
                cout << "Electron configuration: [Rn] 5f^11 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [252]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 100:
                cout << "Element Symbol: Fm" << endl;
                cout << "Word origin: Named after the element 'Fermium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 100" << endl;
                cout << "Electron configuration: [Rn] 5f^12 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [257]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 101:
                cout << "Element Symbol: Md" << endl;
                cout << "Word origin: Named after the element 'Mendelevium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 101" << endl;
                cout << "Electron configuration: [Rn] 5f^13 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [258]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 102:
                cout << "Element Symbol: No" << endl;
                cout << "Word origin: Named after the element 'Nobelium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 102" << endl;
                cout << "Electron configuration: [Rn] 5f^14 7s^2" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [259]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 103:
                cout << "Element Symbol: Lr" << endl;
                cout << "Word origin: Named after the element 'Lawrencium'" << endl;
                cout << "Element category: Actinide" << endl;
                cout << "Element number: 103" << endl;
                cout << "Electron configuration: [Rn] 5f^14 7s^2 7p^1" << endl;
                cout << "Electronegativity: 1.3" << endl;
                cout << "Atomic weight: [266]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Radioactive, metallic element" << endl;
                break;
            case 104:
                cout << "Element Symbol: Rf" << endl;
                cout << "Word origin: Named after the element 'Rutherfordium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 104" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^2 7s^2" << endl;
                cout << "Electronegativity: 0" << endl;
                cout << "Atomic weight: [267]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive metal" << endl;
                break;
            case 105:
                cout << "Element Symbol: Db" << endl;
                cout << "Word origin: Named after the element 'Dubnium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 105" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^3 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [268]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 106:
                cout << "Element Symbol: Sg" << endl;
                cout << "Word origin: Named after the element 'Seaborgium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 106" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^4 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [269]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 107:
                cout << "Element Symbol: Bh" << endl;
                cout << "Word origin: Named after the element 'Bohrium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 107" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^5 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [270]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 108:
                cout << "Element Symbol: Hs" << endl;
                cout << "Word origin: Named after the element 'Hassium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 108" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^6 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [269]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 109:
                cout << "Element Symbol: Mt" << endl;
                cout << "Word origin: Named after the element 'Meitnerium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 109" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^7 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [278]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 110:
                cout << "Element Symbol: Ds" << endl;
                cout << "Word origin: Named after the element 'Darmstadtium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 110" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^9 7s^1" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [281]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 111:
                cout << "Element Symbol: Rg" << endl;
                cout << "Word origin: Named after the element 'Roentgenium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 111" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^1" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [282]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 112:
                cout << "Element Symbol: Cn" << endl;
                cout << "Word origin: Named after the element 'Copernicium'" << endl;
                cout << "Element category: Transition metal" << endl;
                cout << "Element number: 112" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [285]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive transition metal" << endl;
                break;
            case 113:
                cout << "Element Symbol: Nh" << endl;
                cout << "Word origin: Named after the element 'Nihonium'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 113" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^1" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [286]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive element" << endl;
                break;
            case 114:
                cout << "Element Symbol: Fl" << endl;
                cout << "Word origin: Named after the element 'Flerovium'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 114" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^2" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [289]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive element" << endl;
                break;
            case 115:
                cout << "Element Symbol: Mc" << endl;
                cout << "Word origin: Named after the element 'Moscovium'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 115" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^3" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [290]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive element" << endl;
                break;
            case 116:
                cout << "Element Symbol: Lv" << endl;
                cout << "Word origin: Named after the element 'Livermorium'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 116" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^4" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [293]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive element" << endl;
                break;
            case 117:
                cout << "Element Symbol: Ts" << endl;
                cout << "Word origin: Named after the element 'Tennessine'" << endl;
                cout << "Element category: Post-transition metal" << endl;
                cout << "Element number: 117" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^5" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [294]" << endl;
                cout << "Magnetic ordering: Paramagnetic" << endl;
                cout << "Special information: Synthetic, radioactive element" << endl;
                break;
            case 118:
                cout << "Element Symbol: Og" << endl;
                cout << "Word origin: Named after the element 'Oganesson'" << endl;
                cout << "Element category: Noble gas" << endl;
                cout << "Element number: 118" << endl;
                cout << "Electron configuration: [Rn] 5f^14 6d^10 7s^2 7p^6" << endl;
                cout << "Electronegativity: Unknown" << endl;
                cout << "Atomic weight: [294]" << endl;
                cout << "Magnetic ordering: Unknown" << endl;
                cout << "Special information: Synthetic, radioactive noble gas" << endl;
                break;
            default:
                cout << "Wrong choice " << endl;
                break;
            }


}
