#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <sstream>
#include <time.h>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));
	string list[200][2]=
	{
		{"acyclovir", "zovirax"},
		{"adalimumab", "humira"},
		{"allopurinol", "zyloprim"},
		{"atorvastatin", "lipitor"},
		{"colchicine", "colcrys"},
		{"exenatide", "byetta, bydureon"},
		{"ezetimibe", "zetia"},
		{"fluoxetine", "prozac, sarafem"},
		{"folic acid", "folic acid"},
		{"gabapentin", "neurontin, horizant, gralise"},
		{"gemfibrozil", "lopid"},
		{"ibuprofen", "motrin"},
		{"insulin", "humulin n, humulin r"},
		{"insulin aspart", "novolog, novolog flexpen"},
		{"insulin detemir", "levemir"},
		{"insulin glargine", "lantus, lantus solostar"},
		{"insulin lispro", "humalog, humalog kwikpen"},
		{"liraglutide", "victoza/saxenda"},
		{"lisdexamfetamine dimesylate", "vyvanse"},
		{"lorazepam", "ativan"},
		{"memantine", "namenda/namenda xr"},
		{"metformin", "glucophage, riomet, fortamet"},
		{"methotrexate", "rheumatrex"},
		{"mirtazepine", "remeron"},
		{"naproxen", "naprosyn, anaprox"},
		{"niacin", "niaspan"},
		{"nortriptyline", "pamelor"},
		{"olanzapine", "zyprexa"},
		{"paroxetine", "paxil, paxil cr"},
		{"pioglitazone", "actos"},
		{"pravastatin", "pravachol"},
		{"propranolol", "inderal"},
		{"quetiapine", "seroquel, seroquel xr"},
		{"risperidone", "risperdal, risperdal-m"},
		{"rosuvastatin", "crestor"},
		{"saxagliptin", "onglyza"},
		{"sertraline", "zoloft"},
		{"sildenafil", "viagra"},
		{"simvastatin", "zocor"},
		{"simvastatin/ezetimibe", "vytorin"},
		{"sitagliptin", "januvia"},
		{"sitagliptin/metformin", "janumet"},
		{"sumatriptan", "imitrex"},
		{"temazepam", "restoril"},
		{"terazosin", "hytrin"},
		{"tramadol", "conzip, ultram, ultram er, ryzolt, rybix"},
		{"trazodone", "desyrel"},
		{"valacyclovir", "valtrex"},
		{"venlafaxine", "effexor, effexor xr"},
		{"zolpidem", "ambien, ambien cr, edluar, zolpimist, intermezzo"},
		{"acetaminophen/codeine", "tylenol with codeine"},
		{"albuterol aerosol", "proair hfa, proventil, ventolin"},
		{"alprazolam", "xanax"},
		{"amitriptyline", "elavil"},
		{"amphetamine salts", "adderall, adderall xr"},
		{"aripiprazole", "abilify"},
		{"atomoxetine", "strattera"},
		{"baclofen", "gablofen"},
		{"benztropine", "cogentin"},
		{"buprenorphine/naloxone", "suboxone, bunavail, zubsolv"},
		{"bupropion", "wellbutrin (sr, xl), zyban"},
		{"butalbital/apap/caffeine", "fiorcet, esgic"},
		{"carisoprodol", "soma"},
		{"carvedilol", "coreg, coreg cr"},
		{"citalopram", "celexa"},
		{"clonazepam", "klonopin"},
		{"clonidine", "catapres"},
		{"cyclobenzaprine", "flexeril, amrix"},
		{"desvenlafaxine", "pristiq"},
		{"dexmethylphenidate", "focalin xr"},
		{"diazepam", "valium"},
		{"diclofenac", "voltaren gel"},
		{"divalproex", "depakote"},
		{"duloxetine", "cymbalta"},
		{"dutasteride", "avodart"},
		{"escitalopram", "lexapro"},
		{"eszopiclone", "lunesta"},
		{"fentanyl transderm", "duragesic"},
		{"finasteride", "proscar"},
		{"hydrocodone/apap", "vicodin, lorcet, lortab, norco, verdrocet, zamicet, hycet"},
		{"ipratropium bromide/albuterol", "combivent respimat/duoneb"},
		{"lamotrigine", "lamictal"},
		{"lidocaine", "lidoderm"},
		{"methadone", "dolophine"},
		{"methylphenidate", "aptensio xr, concerta, daytrana, ritalin, metadate, methylin"},
		{"methylprednisolone", "medrol"},
		{"ondansetron", "zofran"},
		{"oxybutynin", "ditropan"},
		{"oxycodone", "oxycontin, roxicodone"},
		{"oxycodone/apap", "percocet"},
		{"phenytoin", "dilantin"},
		{"prednisone", "deltasone"},
		{"pregabalin", "lyrica"},
		{"solifenacin", "vesicare"},
		{"tadalafil", "cialis"},
		{"tamsulosin", "flomax"},
		{"timolol", "timoptic, timoptic xe"},
		{"topiramate", "topamax"},
		{"travoprost", "travatan z"},
		{"valproic acid", "depakene"},
		{"amlodipine", "norvasc"},
		{ "amlodipine/benazepril", "lotrel" },
		{ "atenolol", "tenormin" },
		{ "benazepril", "lotensin" },
		{ "bisoprolol", "zebeta" },
		{ "budesonide", "entocort ec, pulmicort, rhinocort aqua, uceris" },
		{ "budesonide/formoterol", "symbicort" },
		{ "dicyclomine", "bentyl" },
		{ "digoxin", "digitek, digox, lanoxin" },
		{ "diltiazem", "cardizem, cardizem cd, cartia la, cartia xt, dilt-xr, matzim la, taztia xt, tiazac" },
		{ "doxazosin", "cardura" },
		{ "enalapril", "vasotec" },
		{ "esomeprazole", "nexium" },
		{ "estrogens(conjugated)", "premarin" },
		{ "ethinyl estradiol/etonogestrel", "nuvaring" },
		{ "famotidine", "pepcid" },
		{ "fenofibrate/choline fenofibrate/fenofibric acid", "antara, fibricor, tricor, triglide, trilipix" },
		{ "fluticasone", "flonase, flovent" },
		{ "fluticasone/salmeterol", "advair" },
		{ "furosemide", "lasix" },
		{ "hydralazine", "apresoline" },
		{ "hydrochlorothiazide", "hctz" },
		{ "irbesartan", "avapro" },
		{ "irbesartan/hydrochlorothiazide", "avalide" },
		{ "isosorbide (mono-, di-nitrate)", "imdur, isordil titradose, dilatrate sr, isoditrate er" },
		{ "lansoprazole", "prevacid" },
		{ "levothyroxine", "synthroid, levoxyl, levothroid, unithroid, tirosint" },
		{ "levothyroxine/liothyronine", "armour thyroid" },
		{ "liothyronine", "cytomel" },
		{ "lisinopril", "prinivil, zestril" },
		{ "lisinopril/hydrochlorothiazide", "prinzide, zestoretic" },
		{ "losartan", "cozaar" },
		{ "losartan/hydrochlorothiazide", "hyzaar" },
		{ "metoprolol succinate", "toprol xl" },
		{ "metoprolol tartrate", "lopressor" },
		{ "mometasone", "nasonex, asmanex" },
		{ "nifedipine", "procardia" },
		{"nitroglycerine", "nitrostat sl"},
		{"olmesartan", "benicar"},
		{"olmesartan/hydrochlorothiazide", "benicar hct"},
		{"omega-3 ethyl esters", "lovaza"},
		{"omeprazole", "prilosec"},
		{"pantoprazole", "protonix"},
		{"potassium", "k-dur, k-tab, klor-con"},
		{"rabeprazole", "aciphex"},
		{"ranitidine", "zantac"},
		{"spironolactone", "aldactone"},
		{"triamterene/hydrochlorothiazide", "dyazide, maxzide"},
		{"valsartan/hydrochlorothiazide", "diovan hct"},
		{"verapamil", "calan, calan sr, verelan, verelan pm"},
		{"alendronate", "fosamax"},
		{"amoxicillin", "amoxil, trimox, moxatag"},
		{"amoxicillin/clavulanic acid", "augmentin"},
		{"apixaban", "eliquis"},
		{"azithromycin", "zithromax, zpak"},
		{"biphasic oral contraceptives", "kariva, mircette, ortho novum 10/12"},
		{"cefdinir", "omnicef"},
		{"cefuroxime", "ceftin, zinacef"},
		{"celecoxib", "celebrex"},
		{"cephalexin", "keflex"},
		{"ciprofloxacin", "cipro"},
		{"clarithromycin", "biaxin"},
		{"clindamycin", "cleocin"},
		{"clopidogrel", "plavix"},
		{"dabigatran", "pradaxa"},
		{"darunavir", "prezista"},
		{"doxycycline", "periostat, vibra-tabs, doryx, adoxa, monodox, oracea"},
		{"emtricitabine/tenofovir/efavirenz", "atripla"},
		{"enoxaparin", "lovenox"},
		{"etanercept", "enbrel"},
		{"fluconazole", "diflucan"},
		{"latanoprost", "xalatan"},
		{"levofloxacin", "levaquin"},
		{"medroxyprogesterone", "provera"},
		{"meloxicam", "mobic"},
		{"metronidazole", "flagyl, metrocream, metrogel"},
		{"minocycline", "solodyn, dynacin, minocin"},
		{"monophasic oral contraceptives", "aviane, alesse, loestrin 24 fe, ortho novum, ovcon, ovral, ortho-cept, sprintec, yasmin, yaz"},
		{"montelukast", "singulair"},
		{"moxifloxacin", "avelox"},
		{"mupirocin", "bactroban"},
		{"nitrofurantoin macrocrystals", "macrobid"},
		{"norethindrone", "nor-qd, micronor, camila"},
		{"oseltamivir", "tamiflu"},
		{"penicillin vk, penicillin g", "penicillin vk, penicillin g"},
		{"phenazopyridine", "pyridium"},
		{"pneumococcal conjugate vaccine", "prevnar 13"},
		{"pneumococcal polysaccharide vaccine", "pneumovax 23"},
		{"promethazine", "phenergan"},
		{"risedronate", "actonel, atelvia"},
		{"rivaroxaban", "xarelto"},
		{"sofosbuvir/ledipasvir", "harvoni"},
		{"sulfamethoxazole/trimethoprim", "bactrim, septra"},
		{"tenofovir df/emtricitabine", "truvada"},
		{"testosterone", "androderm, androgel, axiron, depo-testosterone, striant, testim, testopel, vogelxo"},
		{"triphasic oral contraceptives", "ortho tri-cyclen, ortho tri-cyclen lo, tri-sprintec, trivora"},
		{"varenicline", "chantix"},
		{"varicella vaccine", "varivax"},
		{"warfarin", "coumadin, jantoven"},
		{"zoster vaccine", "zostavax"},
	};
	
	int selection = 0;	
	while (selection != 3)
	{
		cout << "	Menu" << endl;
		cout << "1. Cumulative Review" << endl;
		cout << "2. Specific Review" << endl;
		cout << "3. Exit" << endl;
		cin >> selection;

		if (selection == 1)
		{
			int drugs = 1;
			cout << "How many drugs?" << endl;
			cin >> drugs;
			double total = drugs;
			cin.ignore();
			for (int i = 0; i < drugs; i++)
				{
					string generic;
					int l = rand() % 200;
					int random = rand() % 2;
					if (random == 0)
					{
						cout << "The brand name is " << list[l][1] << ". What is the generic name? (Lowercase letters only)" << endl;
						getline(cin, generic);
						if (generic == list[l][0])
							{
								cout << "CORRECT!" << endl;
							}
						else
							{
								cout << "Incorrect" << endl;
								cout <<"The generic is " <<list[l][0] << endl;
								total = total - 1;
							}
					}
					else if (random == 1)
					{
						string brand;
						cout << "The generic name is " << list[l][0] << ". What is the brand name? (Lowercase letters only)" << endl;
						getline(cin, brand);
						if (brand == list[l][1])
							{
								cout << "CORRECT!" << endl;
							}
						else
							{
								cout << "Incorrect" << endl;
								cout << "The brand name is " <<list[l][1] << endl;
								total = total - 1;
							}

					}
				}
			cout << total / drugs * 100 << "%!" << endl;
		}
		else if (selection == 2)
		{
			int assessment_choice;
			double drugs1;
			cout << "Which assessment number?" << endl;
			cin >> assessment_choice;
			cout << "How many drugs?" << endl;
			cin >> drugs1;
			double total = drugs1;
			string assessment[50][2];
			cin.ignore();
			if (assessment_choice == 1)
			{
				for (int i = 0; i < 50; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						assessment[i][j] = list[i][j];
					}
				}
			}
			else if (assessment_choice == 2)
			{
				for (int i = 0; i < 50; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						assessment[i][j] = list[i+50][j];
					}
				}
			}
			else if (assessment_choice == 3)
			{
				for (int i = 0; i < 50; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						assessment[i][j] = list[i+100][j];
					}
				}
			}
			else if (assessment_choice == 4)
			{
				for (int i = 0; i < 50; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						assessment[i][j] = list[i+150][j];
					}
				}
			}

			else
			{
				cout << "No assessment exists" << endl;
			}
			if (assessment_choice == 1 || assessment_choice == 2 || assessment_choice == 3 || assessment_choice == 4)
			{
				for (int i = 0; i < drugs1; i++)
				{
					string generic;
					int l = rand() % 50;
					int random = rand() % 2;
					if (random == 0)
					{
						cout << "The brand name is " << assessment[l][1] << ". What is the generic name? (Lowercase letters only)" << endl;
						
						getline(cin, generic);
						if (generic == assessment[l][0])
						{
							cout << "CORRECT!" << endl;
						}
						else
						{
							cout << "Incorrect" << endl;
							cout << "The generic is " << assessment[l][0] << endl;
							total = total - 1;
						}
					}
					else if (random == 1)
					{
						string brand;
						cout << "The generic name is " << assessment[l][0] << ". What is the brand name? (Lowercase letters only)" << endl;
					
						getline(cin, brand);
						if (brand == assessment[l][1])
						{
							cout << "CORRECT!" << endl;
						}
						else
						{
							cout << "Incorrect" << endl;
							cout << "The brand name is " << assessment[l][1] << endl;
							total = total - 1;
						}

					}
				}
			}
			cout << total / drugs1 * 100 << "%!" << endl;
		}
		else if (selection != 3)
		{
			cout << "Invalid input" << endl;
		}
	}
	return 0;
}