# Měření výšky vodní hladiny v nádrži

### Členové týmu

* Jan Bartoň
* Ondřej Dudášek
* Daniel Havránek
* Matěj Podaný

Link to this file in your GitHub repository:

[https://github.com/ondrejdudasek/DE2-Project](https://github.com/ondrejdudasek/DE2-Project)


## Cíle projektu

* Měření výšky hladiny ve vodní nádrži
* Detekce deště
* Ovládání čerpadla na základě výšky hlaidny
* Výdtup na displej - výška hladiny, detekce deště, stav čerpadla
* Optická signalizace pomocí LED - TOBEDONE


## Popis hardwaru

Řídící jednotkou projektu je Arduino UNO. Pro detekci výšky hladiny byl použit ultrazvukový senzor HC-SR04. Ovládání čerpadla zajišťuje NC rele. Optický výstup zajišťuje výcebarvná LED a LCD kyepad shield.

![Schéma zapojení](images/WTC_Scheme.png)


## Libraries description

Write your text here.

## Popis softwaru

K měření výšky hladiny nádrže se používá ultrazvukový senzor HS-SR40. Poté, co senzor obdrží trigger signál generovaný arduinem o šířce 10 us, je ze senzoru vysláno osm pulzů ultrazvuku a následně přijde echo signál ze senzoru do arduina. Vzdálenost od vodní hladiny se

![Flowchart](images/Main.drawio.svg)


## Video

Write your text here

## References

