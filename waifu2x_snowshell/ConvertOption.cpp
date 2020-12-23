#include "ConvertOption.h"

ConvertOption::ConvertOption() {
	NoiseLevel = CO_NOISE_NONE;
	CoreNum = 0;
	DebugMode = 0;
	NoLabel = false;
	ForceCPU = false;
	IsTTAEnabled = false;
	ScaleRatio = L"1.0";
	InputFilePath = L"";
	OutputFolderName = L"";
	OutputFileExtension = L"png";
}

ConvertOption::ConvertOption(std::wstring inputFile, int noiseLevel, std::wstring scaleRatio, bool ttaEnabled, std::wstring OutputFolderName, std::wstring OutputFileExtension) {
	this->NoiseLevel = noiseLevel;
	this->CoreNum = 0;
	this->DebugMode = 0;
	this->NoLabel = false;
	this->ForceCPU = false;
	this->IsTTAEnabled = ttaEnabled;
	this->ScaleRatio = scaleRatio;
	this->InputFilePath = inputFile;
	this->OutputFolderName = OutputFolderName;
	this->OutputFileExtension = OutputFileExtension;
}

void ConvertOption::setNoiseLevel(int noiseLevel) {
	this->NoiseLevel = noiseLevel;
}

void ConvertOption::setCoreNum(int coreNum) {
	this->CoreNum = coreNum;
}

void ConvertOption::setDebugMode(int DebugMode) {
	this->DebugMode = DebugMode;
}

void ConvertOption::setNoLabel(bool noLabel) {
	this->NoLabel = NoLabel;
}

void ConvertOption::setForceCPU(bool forceCPU) {
	this->ForceCPU = forceCPU;
}

void ConvertOption::setTTAEnabled(bool ttaEnabled) {
	this->IsTTAEnabled = ttaEnabled;
}

void ConvertOption::setScaleRatio(std::wstring scaleRatio) {
	this->ScaleRatio = scaleRatio;
}

void ConvertOption::setInputFilePath(std::wstring inputFile) {
	this->InputFilePath = inputFile;
}

void ConvertOption::setOutputFolderName(std::wstring OutputFolderName) {
	this->OutputFolderName = OutputFolderName;
}

void ConvertOption::setOutputFileExtension(std::wstring OutputFileExtension) {
	this->OutputFileExtension = OutputFileExtension;
}


int ConvertOption::getNoiseLevel() {
	return this->NoiseLevel;
}

int ConvertOption::getCoreNum() {
	return this->CoreNum;
}

int ConvertOption::getDebugMode() {
	return this->DebugMode;
}

bool ConvertOption::getNoLabel() {
	return this->NoLabel;
}

bool ConvertOption::getForceCPU() {
	return this->ForceCPU;
}

bool ConvertOption::getTTAEnabled() {
	return this->IsTTAEnabled;
}

std::wstring ConvertOption::getScaleRatio() {
	return this->ScaleRatio;
}

std::wstring ConvertOption::getInputFilePath() {
	return this->InputFilePath;
}

std::wstring ConvertOption::getOutputFolderName() {
	return this->OutputFolderName;
}

std::wstring ConvertOption::getOutputFileExtension() {
	return this->OutputFileExtension;
}