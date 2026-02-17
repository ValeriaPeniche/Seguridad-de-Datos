# Bitácora Seguridad de datos

# 📝 Notas de clase
---

## Clase 1 (19/01/2026)

### Temas vistos:
- **Tríada CIA:** Confidentiality, Integrity, Availability
- **Estados de datos:** Reposo, tránsito, memoria
- **TLS/SSL:** Encriptación en tránsito
- **Triángulo de usabilidad:** Seguridad vs Funcionalidad vs Usabilidad
- **MFA:** Sabes + Tienes + Eres
- **AAA:** Authentication, Authorization, Accountability

---

## Clase 2 (21/01/2026)

### Temas vistos:
- **TFA:** Two Factor Authentication
- **Separation of duties:** Separación de responsabilidades
- **Least privileged:** Mínimos permisos necesarios
- **Modelo OSI** (7 capas) y **TCP/IP** (5 capas)
- **Direccionamiento por capa:** IP, MAC, Puertos
- **Puertos comunes:** 80, 22, 21, 443, etc.
- **Port scanning:** Nmap
- **TCP 3-way handshake**
- **Ataques:** SYN Flood, IP/MAC Spoofing

---

## Clase 3 (26/01/2026)

### Temas vistos:
- **Falso positivo / Falso negativo**
- **Escáneres:** Nessus, Qualys, OpenVAS
- **Bases de datos:** NVD, CVE
- **Conceptos:** Vulnerabilidad, Exploit, Riesgo
- **Threat intelligence / Threat analysis**
- **Tipos de hackers:** White, Black, Gray, Script kiddie, etc.
- **Red team vs Blue team**

---

## Clase 4 (28/01/2026)

### Temas vistos:
- **VSFTPD:** Servidor FTP seguro
- **Zero-day:** Vulnerabilidad sin parche
- **Shodan:** Buscador de dispositivos IoT
- **Bug bounty:** Recompensas por vulnerabilidades
- **Plataformas:** HackTheBox, TryHackMe, VulnHub, Metasploitable2
- **Herramientas:** Metasploit, Exploit-DB, Banner grabber
- **Tipos de pentest:** Caja blanca / Caja negra
- **OSINT:** Información de fuentes públicas
- **SIEM:** Security Information and Event Management
- **SOC vs NOC**

---

## Clase 5 (04/02/2026)

### Temas vistos:
- **Ingeniería social:** Manipulación psicológica
- **Ataques:** Phishing, Spear phishing, Whaling
- **Técnicas físicas:** Dumpster diving, Shoulder surfing, Tailgating
- **Man trap:** Sistema de doble puerta
- **Contraseñas:** Entropía, password managers
- **Políticas:** Longitud, complejidad, historial, rotación
- **1337 (Leet)**
- **Cifrado César/ROT**

---

## Clase 6 (09/02/2026)

### Temas vistos:
- **ATTiny85:** Configuración para proyecto
- **Metasploitable 2:** Máquina vulnerable para prácticas

---

# 📚 Tareas

---

## Tarea #997: Conceptos Básicos de Seguridad

### Triada CIA

| Concepto | Definición | Mecanismos |
|---------|------------|------------|
| **Confidencialidad** | Solo autorizados acceden | Cifrado, control de acceso |
| **Integridad** | Datos no modificados sin permiso | Hashing, firmas digitales |
| **Disponibilidad** | Sistemas operativos cuando se necesitan | Redundancia, backups |

### Triangulo de Usabilidad
               SEGURIDAD
                    ↑
                  /   \
                 /     \
                /       \
      FUNCIONALIDAD ← → USABILIDAD

**Principio:** No se pueden maximizar los tres simultáneamente.

### Riesgo

**Fórmula conceptual:** RIESGO = Amenaza × Vulnerabilidad × Impacto
AMENAZA (externo) ──→ EXPLOTA ──→ VULNERABILIDAD (interno) ──→ GENERA ──→ IMPACTO
↓
RIESGO


### MFA (Autenticación Multifactor)

| Factor | Categoría | Ejemplos |
|--------|-----------|----------|
| **Sabes** | Conocimiento | Contraseña, PIN |
| **Tienes** | Posesión | Token, celular, tarjeta |
| **Eres** | Biométrico | Huella, voz, rostro |

**2FA:** Utiliza exactamente dos categorías diferentes.

### Vulnerabilidad

**Definición:** Debilidad que puede ser explotada.

**Tipos:**
| Tipo | Ejemplo |
|------|---------|
| Software | Bug, falta de parche |
| Configuración | Puerto abierto innecesario |
| Humana | Contraseña débil |
| Física | Acceso sin control |

### Amenaza

**Definición:** Agente que puede explotar una vulnerabilidad.

**Clasificación:**
- **Naturales:** Terremotos, incendios, inundaciones
- **Humanas:** Hackers, insider threats, errores
- **Tecnológicas:** Malware, fallos de hardware

### Impacto

**Definición:** Consecuencia de materializarse una amenaza.

**Dimensiones del impacto:**
- **Económico:** Pérdidas directas, multas
- **Reputacional:** Pérdida de confianza
- **Legal:** Demandas, sanciones regulatorias
- **Operacional:** Sistemas fuera de servicio
- **Datos:** Fuga de información sensible

---

## Tarea #996: Instalar ParrotSec en VirtualBox

---

## Tarea #995: ATTiny85 - PoC

---

## 📸 Google Phishing Quiz
