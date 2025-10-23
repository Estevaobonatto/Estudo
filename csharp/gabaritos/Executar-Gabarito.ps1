param(
    [Parameter(Mandatory=$true)]
    [string]$Gabarito
)

# Verifica se o arquivo existe
$gabaritoPath = Join-Path $PSScriptRoot "$Gabarito.cs"
if (!(Test-Path $gabaritoPath)) {
    Write-Host "Arquivo $Gabarito.cs não encontrado!" -ForegroundColor Red
    exit 1
}

# Cria uma pasta temporária para compilar
$tempDir = Join-Path $env:TEMP "dotnet_temp_$(Get-Random)"
New-Item -ItemType Directory -Path $tempDir -Force | Out-Null

try {
    # Copia o arquivo para a pasta temporária
    Copy-Item $gabaritoPath $tempDir

    # Cria um .csproj simples na pasta temporária
    $csprojContent = @"
<Project Sdk="Microsoft.NET.Sdk">
  <PropertyGroup>
    <OutputType>Exe</OutputType>
    <TargetFramework>net8.0</TargetFramework>
    <ImplicitUsings>enable</ImplicitUsings>
    <Nullable>enable</Nullable>
  </PropertyGroup>
</Project>
"@

    $csprojPath = Join-Path $tempDir "$Gabarito.csproj"
    $csprojContent | Out-File -FilePath $csprojPath -Encoding UTF8

    # Executa o programa
    Push-Location $tempDir
    dotnet run "$Gabarito.cs"
} finally {
    # Limpa a pasta temporária
    Pop-Location
    Remove-Item $tempDir -Recurse -Force
}